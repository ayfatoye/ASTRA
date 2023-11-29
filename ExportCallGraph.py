import subprocess
import json
import os

# Path to the Ghidra project
ghidra_project_path = "/path/to/ghidra/project"
# Path to the binary file you want to analyze
binary_path = "/path/to/binary/file"
# Path to the Ghidra installation
ghidra_path = "/path/to/ghidra"
# Path to the Ghidra script that extracts the call flow graph
ghidra_script_path = "/path/to/ghidra/script"

# Running Ghidra in headless mode
headless_command = [
    f"{ghidra_path}/support/analyzeHeadless",
    ghidra_project_path,
    "project_name",  # You can specify a project name
    "-import", binary_path,
    "-postScript", ghidra_script_path,
    "-deleteProject"
]

subprocess.run(headless_command)

# Assuming your Ghidra script outputs the call graph in JSON format to a file
output_json_path = "/path/to/output.json"

# Read the JSON output
with open(output_json_path, 'r') as file:
    call_graph = json.load(file)
