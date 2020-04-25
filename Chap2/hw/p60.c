/**
 * Swaps a byte in a w-bit word at position i where i ranges from
 * 0 to w/8-1, with a given char y.
 **/

#include <stdio.h>
#define BYTE_SIZE 8

unsigned replace_byte(unsigned x, int i, unsigned char y) {
	unsigned mask = 0xFF;
	mask = mask << (i*BYTE_SIZE);
	x = x & ~mask;
	return x | (y << i*BYTE_SIZE);
}

int main(int argc, const char* argv[]) {
	printf("0x%x\n", replace_byte(0x12345678, 0, 0xAB));
	return 0;
}
