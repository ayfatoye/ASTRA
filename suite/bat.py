# binary analysis tool

'''
	planned:
		- show strings in binary
'''

import re
import argparse

def find_ips_and_urls(data):
    ip_pattern = r'\b(?:\d{1,3}\.){3}\d{1,3}\b'
    url_pattern = r'https?://(?:[-\w.]|(?:%[\da-fA-F]{2}))+'

    ips = re.findall(ip_pattern, data)
    urls = re.findall(url_pattern, data)

    return ips, urls

def main():
    parser = argparse.ArgumentParser(description="Extract IP addresses and URLs from a binary file.")
    parser.add_argument('file_path', type=str, help="Path to the binary file")

    args = parser.parse_args()

    try:
        with open(args.file_path, 'rb') as file:
            data = file.read().decode('utf-8', errors='ignore')
    except IOError:
        print(f"Error: Could not open file {args.file_path}")
        return

    ips, urls = find_ips_and_urls(data)

    print("Found IP Addresses:", ips)
    print("Found URLs:", urls)

if __name__ == "__main__":
    main()
