import argparse

parser = argparse.ArgumentParser(description='Description of your program')

parser.add_argument('--analyze', '-a', help='Initiates the analysis process. Example: bat -a /path/to/source')
parser.add_argument('--output', '-o', help='Specifies the file path for the analysis report. Example: bat -a /path/to/source -o /path/to/report.txt')
parser.add_argument('--ignore-list', '-i', help='Excludes files or directories from the analysis. Example: bat -a /path/to/source -i /path/to/ignorelist.txt')
parser.add_argument('--dry-run', action='store_true', help='Performs a trial run without making any actual changes. Example: bat -a /path/to/source')
parser.add_argument('--verbose', '-v', action='store_true', help='Provides detailed logs of the analysis process. Example: bat -a /path/to/source -v')
# parser.add_argument('--help', help='Displays help information about the commands and usage. Example: bat --help')

args = parser.parse_args()

# Access the parsed arguments
if args.analyze:
    print(f'Analyzing: {args.analyze}')

if args.output:
    print(f'Output file path: {args.output}')

if args.ignore_list:
    print(f'Ignoring files/directories in: {args.ignore_list}')

if args.dry_run:
    print('Performing a dry run')

if args.verbose:
    print('Verbose mode enabled')

if args.help:
    print('Displaying help information')
