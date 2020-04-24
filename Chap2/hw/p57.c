/**
 * Takes in a short, long, and double as command args
 * and prints hex value of the bytes
 **/

#include <stdio.h>
#include <stdlib.h>

#define LEN_SHORT sizeof(short int)
#define LEN_LONG sizeof(long int)
#define LEN_DOUBLE sizeof(double)

void show_bytes(unsigned char* data, int len) {
	printf("Hex:");
	for (int i=0; i<len; i++) {
		printf(" %.2x", data[i]);
	}
	printf("\n");
}

void show_short(short int s) {
	show_bytes((unsigned char*) &s, LEN_SHORT);
}

void show_long(long int l) {
	show_bytes((unsigned char*) &l, LEN_LONG);
}

void show_double(double d) {
	show_bytes((unsigned char*) &d, LEN_DOUBLE);
}

int main(int argc, const char* argv[]) {
	short int s = atoi(argv[1]);
	long int l = atoi(argv[2]);
	double d = atof(argv[3]);

	printf("Showing short int:\n");
	show_short(s);
	printf("\nShowing long int:\n");
	show_long(l);
	printf("\nShowing double:\n");
	show_double(d);
	return 0;
}
