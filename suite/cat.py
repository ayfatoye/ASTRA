import re
import argparse

# Regular expression pattern to match function signatures
fn_pattern = re.compile(r'\w+\s+\**?(__thiscall\s+)?\n*([\w:<>~]+)\s*\(.*')
ns_pattern = re.compile(r'([^:]+)(?:::|$)')

def get_fn_ln_info(file_path):
    fns = []
    lns = []
    done = {}

    with open(file_path, 'r') as file:
        lines = file.readlines()

    for ln, line in enumerate(lines):
        if ln < len(lines) - 1:
            line = line + lines[ln + 1]

        if ln < len(lines) - 2:
            line = line + lines[ln + 2]

        match = fn_pattern.search(line)

        if match:
            fn = match.group(2)

            if not fn in done:
                fns.append(fn)
                lns.append(ln)
                done[fn] = True

    return fns, lns, len(lns), lines

def get_ns_info(signature):
    return ns_pattern.findall(signature)

def get_deps_info(file_path):
    fns, lns, n, lines = get_fn_ln_info(file_path)
    fn_deps = {fn: [] for fn in fns}
    fn_uses = {fn: [] for fn in fns}
    
    for i in range(n):
        ln = lns[i]
        fn = fns[i]

        fn_ns_info = get_ns_info(fn)
        
        start_idx = ln + 3
        end_idx = (lns[i + 1] if i != n - 1 else len(lines)) - 4

        for line in lines[start_idx:end_idx]:
            for other_fn in fns:
                other_fn_ns_info = get_ns_info(other_fn)
                
                if (other_fn + "(") in line or (other_fn_ns_info[:-1] == fn_ns_info[:-1] and (other_fn_ns_info[-1] + "(") in line):
                    if not other_fn in fn_deps[fn]:
                        fn_deps[fn].append(other_fn)

                    if not fn in fn_uses[other_fn]:
                        fn_uses[other_fn].append(fn)

    return fn_deps, fn_uses

def fns_cmd(file_path):
    fns, lns, _, _ = get_fn_ln_info(file_path)
    
    for fn in fns:
        print(fn) 

def deps_cmd(file_path):
    fn_deps, _ = get_deps_info(file_path)

    for fn, deps in fn_deps.items():
        if deps:
            print(fn + ":")
            for dep in deps:
                print("---->", dep)
            print()
        

def idc_cmd(file_path):
    _, fn_uses = get_deps_info(file_path)

    for fn, uses in fn_uses.items():
        if not uses:
            print(fn)

def main():
    parser = argparse.ArgumentParser(description='C file analysis tool.')
    subparsers = parser.add_subparsers(dest='command')

    # Subparser for 'fns' command
    parser_dep = subparsers.add_parser('fns', help='Find function names in a decompiled c/cpp file exported from Ghidra')
    parser_dep.add_argument('file_path', type=str, help='Path to the c/cpp file')

    # Subparser for 'dep' command
    parser_dep = subparsers.add_parser('deps', help='Find function dependencies in a decompiled c/cpp file exported from Ghidra')
    parser_dep.add_argument('file_path', type=str, help='Path to the c/cpp file')

    # Subparser for 'dead_code' command
    parser_dead_code = subparsers.add_parser('idc', help='Identify dead code in a decompiled c/cpp file exported from Ghidra')
    parser_dead_code.add_argument('file_path', type=str, help='Path to the c/cpp file')

    # Parse the arguments
    args = parser.parse_args()

    if args.command == 'fns':
        fns_cmd(args.file_path)
    elif args.command == 'deps':
        deps_cmd(args.file_path)
    elif args.command == 'idc':
        idc_cmd(args.file_path)

if __name__ == "__main__":
    main()