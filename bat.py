import argparse
import subprocess
import os

def run_ghidra_analysis(binary_path, output_path, ghidra_path, ghidra_script_path):
    # Ensure the output directory exists
    output_dir = os.path.dirname(output_path)
    if output_dir and not os.path.exists(output_dir):
        os.makedirs(output_dir, exist_ok=True)

    # Construct the Ghidra headless command
    headless_command = f"\"{ghidra_path}\\support\\analyzeHeadless\" {ghidra_path} temp_project -import \"{binary_path}\" -postScript \"{ghidra_script_path}\" -deleteProject -readOnly"

    # Run the command
    subprocess.run(headless_command, shell=True)
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

# Usage: python bat.py --analyze "C:\Users\Sebastian\Desktop\ASTRA\test\main" --output "output.json" --ghidra "C:\Users\Sebastian\Desktop\ghidra_10.3.3_PUBLIC"