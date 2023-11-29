import argparse
import subprocess
import os

def run_ghidra_analysis(binary_path, output_path, ghidra_path, ghidra_script_path):
    # Resolve output path to an absolute path
    output_path = os.path.abspath(output_path)

    # Check if the output directory is empty
    output_dir = os.path.dirname(output_path)
    if not output_dir:
        output_dir = '.'

    # Ensure output directory exists
    os.makedirs(output_dir, exist_ok=True)

    # Running Ghidra in headless mode
    headless_command = [
        os.path.join(ghidra_path, "support", "analyzeHeadless"),
        ghidra_path,  # Ghidra project directory
        "temp_project",  # Temporary project name
        "-import", binary_path,
        "-postScript", ghidra_script_path,
        "-scriptPath", os.path.dirname(ghidra_script_path),
        "-deleteProject",
        "-readOnly"
    ]

    subprocess.run(headless_command)
    print("Call graph exported to {}".format(output_path))

def main():
    parser = argparse.ArgumentParser(description='Binary Analysis Tool')
    parser.add_argument('--analyze', help='Path to binary for analysis')
    parser.add_argument('--output', help='Output file path for the analysis report')
    parser.add_argument('--ghidra', help='Path to Ghidra installation')
    args = parser.parse_args()

    if args.analyze and args.output and args.ghidra:
        ghidra_script_path = os.path.join(os.path.dirname(__file__), "ExportCallGraph.py")
        run_ghidra_analysis(args.analyze, args.output, args.ghidra, ghidra_script_path)
    else:
        print("Missing arguments. Use --help for more information.")

if __name__ == "__main__":
    main()
