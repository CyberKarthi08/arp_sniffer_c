# ARP SNIFFER

--> designed to boost network security by giving administrators and security professionals a tool to proactively spot and respond to ARP spoofing threats.

--> It uses modules like libpcap, socket programming, and IP/MAC address manipulation to detect and address ARP spoofing attacks.

--> ARP spoofing involves the malicious manipulation of ARP messages, which can lead to network breaches and data interception.

## gcc _main_arp_sniffer.c -o arpsniffer -lpcap   ( -lpcap is must important to run a libcap - c libraries )

--> After a get a binary file , Run 

## ./arpsniffer ( link include a argument --> --help , --lookup, --interface)
