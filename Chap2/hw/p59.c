/**
 * Yields a word consisting of the 
 * least significant byte from x with 
 * the remaining bytes from y
 *
 * Example x: 0x89ABCDEF
 * Example y: 0x76543210
 * Example result: 0x765432ef
 **/
#include <stdio.h>

int smoosh(int x, int y) {
	x = x & 255;
	y = y & ~255;
	return y|x;
}

int main() {
	printf("0x%.x\n", smoosh(0x89ABCDEF, 0x76543210));
	return 0;
}
