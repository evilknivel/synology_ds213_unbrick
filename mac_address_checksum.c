#include <stdio.h>
int main() {
    // change 0xFF, 0xFF, 0xFF to match your MAC address
    unsigned char chksum = 0; int i = 0; unsigned char rgAddr[6] = {0x00, 0x11, 0x32, 0xFF, 0xFF, 0xFF};
    for (i = 0; i < 6; i++) { 	
        chksum += rgAddr;
    }
    printf("Checksum: 0x%X\n", chksum);
    return 0;
}
// in DS213 the MAC Adress goes to address 7d0000 in flash (beginning of mdt3 "vendor" patition) first 6 bytes are the mac address 7th byte is the here calculated checksum.
