import argparse
import subprocess
import os

def run_ghidra_analysis(binary_path, output_path, ghidra_path, ghidra_script_path):
    # Ensure the output directory exists
    output_dir = os.path.dirname(output_path)
    if not os.path.exists(output_dir):
        os.makedirs(output_dir, exist_ok=True)

    # Construct Ghidra headless command more robustly
    headless_command = [
        os.path.join(ghidra_path, "support", "analyzeHeadless"),
        ghidra_path,  # Ghidra project directory
        "temp_project",  # Temporary project name
        "-import", binary_path,
        "-postScript", ghidra_script_path,
        "-scriptPath", os.path.dirname(ghidra_script_path),
        "-deleteProject",
        "-readOnly",
        "-process", os.path.basename(binary_path),  # Specify binary to process
        "-noanalysis"  # Stop automatic analysis to ensure script runs correctly
    ]

    # Execute the command
    subprocess.run(headless_command)
    print(f"Call graph exported to {output_path}")

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
