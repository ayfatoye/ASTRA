import argparse
import re

def find_globals(data):
    global_pattern = r'\.bss:.*\[abi:cxx11\]'

    globals = re.findall(global_pattern, data)
    globals = list(set(globals))

    return globals

def get_value_from_line(str):
    str = str.rstrip()
    space_ind = str.rfind(" ")
    h_ind = str.rfind("h", 0, space_ind)
    str = str[h_ind+1:]
    return str.strip()

def find_inits(data, globals_list):
    init_start = data.find("__static")
    init_end = data.find("RET", init_start)
    init_function = data[init_start:init_end+3]

    init_pattern = r'(?:param.*\n.*param.*|param.*)\n.*;try.*\n.*\n.*'
    inits = re.findall(init_pattern, init_function)

    global_info = {}
    values = []
    for init in inits:
        if 'param_2' in init:
            first_line = init.find("\n")
            value = init[9:first_line]
            if "DAT" in value:
                bracket_ind = value.find("]")
                value = value[8:bracket_ind]
                value_section_ind = data.find(value, init_end)
                value_section_end = data.find("00h", value_section_ind)
                value_section = data[value_section_ind:value_section_end]
                value_lines = value_section.split("\n")
                value_lines = value_lines[1:-1]
                value_lines = list(map(get_value_from_line, value_lines))
                value = value_lines
            else:
                value_ind = value.find(";=")
                value = value[value_ind+2:].strip()
            values.append(value)
        glob = False
        for global_var in globals_list:
            if global_var in init:
                type_ind = init.find("CALL")
                type = init[type_ind+4:].strip()
                values.insert(0, type)
                global_info[global_var] = values.copy()
                values.clear()
                glob = True
                break
        if glob:
            continue
    
    return global_info


def globals_names(globals_list):
    globals = list(map(lambda str: str[5:-11], globals_list))
    return globals

def main():
    parser = argparse.ArgumentParser(description="Extract global variables from an exported ascii file from Ghidra.")
    parser.add_argument('file_path', type=str, help="Path to the ascii file")

    args = parser.parse_args()

    try:
        with open(args.file_path, 'r') as file:
            data = file.read()
    except IOError:
        print(f"Error: Could not open file {args.file_path}")
        return

    globals = find_globals(data)

    global_info = find_inits(data, globals)

    global_keys = list(global_info.keys())
    global_keys = globals_names(global_keys)
    global_info = dict(zip(global_keys, list(global_info.values())))

    print("Global Variable info for file: ", args.file_path)
    print("------------------------------------------------------\n")
    for global_var in global_info.keys():
        print("Variable Name: ", global_var)
        print("Variable Type: ", global_info[global_var][0])
        if len(global_info[global_var]) > 2:
            print("Variable Value: ", global_info[global_var][1:])
        else:
            print("Variable Value: ", global_info[global_var][1])
        print()
        

if __name__ == "__main__":
    main()
