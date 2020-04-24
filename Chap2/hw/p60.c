#include <stdio.h>
#define BYTE_SIZE 4
unsigned replace_byte(unsigned x, int i, unsigned y) {

	unsigned mask = ~0x8;
	mask = mask << i*BYTE_SIZE;
	printf("%d\n", sizeof(y));
	printf("%x\n", x & mask);
}

int main(int argc, const char* argv[]) {
	replace_byte(0x12345678, 4, 0xAB);
	return 0;
}
