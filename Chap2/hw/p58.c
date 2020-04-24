/**
 * Simple code for determining if 
 * architecture is little endian
 **/
#include <stdio.h>

int is_little_endian() {
	int x = 0x01234567;
	unsigned char* p_x = (unsigned char*) &x;
	if (p_x[0] > p_x[1]) {
		return 1;
	}
	return 0;
}

int main(int argc, const char* argv[]) {

	printf("Is little endian: ");
	if (is_little_endian())
		printf(" True\n");
	else
		printf(" False\n");

	return 0;
}
