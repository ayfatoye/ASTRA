import argparse
import subprocess
import os

def run_ghidra_analysis(binary_path, output_path, ghidra_path, ghidra_script_path):
    # Ensure output directory exists
    os.makedirs(os.path.dirname(output_path), exist_ok=True)

    # Running Ghidra in headless mode
    headless_command = [
        f"{ghidra_path}/support/analyzeHeadless",
        "/path/to/ghidra/project",  # Temporary Ghidra project path
        "temp_project",  # Temporary project name
        "-import", binary_path,
        "-postScript", ghidra_script_path,
        "-scriptPath", os.path.dirname(ghidra_script_path),
        "-deleteProject",
        "-readOnly"  # Add this flag to prevent changes to the binary
    ]

    subprocess.run(headless_command)
    print(f"Call graph exported to {output_path}")

def main():
    parser = argparse.ArgumentParser(description='Binary Analysis Tool')

    parser.add_argument('--analyze', '-a', help='Initiates the analysis process. Example: bat -a /path/to/source')
    parser.add_argument('--output', '-o', help='Specifies the file path for the analysis report. Example: bat -a /path/to/source -o /path/to/report.json')
    parser.add_argument('--ignore-list', '-i', help='Excludes files or directories from the analysis. Example: bat -a /path/to/source -i /path/to/ignorelist.txt')
    parser.add_argument('--dry-run', action='store_true', help='Performs a trial run without making any actual changes. Example: bat -a /path/to/source')
    parser.add_argument('--verbose', '-v', action='store_true', help='Provides detailed logs of the analysis process. Example: bat -a /path/to/source -v')

    args = parser.parse_args()

    # Get the directory of the current script
    current_script_directory = os.path.dirname(os.path.realpath(__file__))

    # Construct the path to the Ghidra script
    ghidra_script_path = os.path.join(current_script_directory, "ExportCallGraph.py")

    # Access the parsed arguments
    if args.analyze:
        print(f'Analyzing: {args.analyze}')
        if args.output:
            print(f'Output file path: {args.output}')
            # Set the path to your Ghidra installation
            ghidra_path = "C:/Users/Sebastian/Desktop/ghidra_10.3.3_PUBLIC"
            run_ghidra_analysis(args.analyze, args.output, ghidra_path, ghidra_script_path)
        else:
            print("Output path is required for analysis.")

    if args.ignore_list:
        print(f'Ignoring files/directories in: {args.ignore_list}')

    if args.dry_run:
        print('Performing a dry run')

    if args.verbose:
        print('Verbose mode enabled')

if __name__ == "__main__":
    main()

# How to use: 
# python python bat.py --analyze "C:/path/to/binary" --output "C:/path/to/output.json"