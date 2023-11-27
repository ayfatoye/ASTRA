# code analysis tool

'''
	planned:
		- show globals
        
		goes through every file .gc and .gh file in a directory 1 by 1

			first pass through every file:
				- creates id for methods and namespaced methods: (eg. class-[CLASSNAME] :: function-[FUNCTION_INFO] or if not namespaced: function-[FUNCTION_INFO])

			second pass thru every file:
				- for each one, it makes a list of any other function calls within that function (list of dependencies for each fn)

		use argparse to take a path to directory
'''

import os
import argparse
import re

def parse_file(file_path):
    # Function to parse a single file and extract methods and dependencies
    methods = {}
    
    with open(file_path, 'r') as file:
        content = file.readlines()

        current_method = None
        for line in content:
            method_match = re.match(r"method definition regex", line)
            if method_match:
                current_method = method_match.group(1)  # or appropriate group based on regex
                methods[current_method] = {'dependencies': set()}
                continue

            # Check for function calls within a method and add them to dependencies
            if current_method:
                call_match = re.findall(r"function call regex", line)
                if call_match:
                    methods[current_method]['dependencies'].update(call_match)

    return methods

def scan_directory(directory):
    all_methods = {}
    
    for filename in os.listdir(directory):
        if filename.endswith('.gc') or filename.endswith('.gh'):
            file_path = os.path.join(directory, filename)
            methods = parse_file(file_path)
            all_methods.update(methods)
            
    return all_methods

import re

def parse_c_code(text):
    # Regular expression to find function definitions
    function_pattern = re.compile(r'\w+\s+\**(__thiscall)?\s*(\w+::)?(\w+)\(')
    functions = {}

    # Find all matches in the text
    for match in function_pattern.finditer(text):
        # Construct the function name, including namespace if present
        function_name = match.group(2) + match.group(3) if match.group(2) else match.group(3)
        functions[function_name] = []

    return functions

def main():
    parser = argparse.ArgumentParser(description="Code Analysis Tool")
    parser.add_argument("directory", help="Path to the directory to scan")
    args = parser.parse_args()

    directory = args.directory
    all_methods = scan_directory(directory)
    
    for method, info in all_methods.items():
        print(f"Method: {method}, Dependencies: {info['dependencies']}")

if __name__ == "__main__":
    main()


