#include <stdio.h>

#define INT_SIZE (sizeof(int)<<3)
#define BYTE_SIZE 8

/**
 * Returns 1 if at least one bit is one
 **/
int bit_is_one(int x) {
	return x && 1;
}

/**
 * Returns 1 if at least one bit is zero
 **/
int bit_is_zero(int x) {
	int mask = ~0;
	return (x ^ mask) && 1;
}

/**
 * Returns 1 if at least one bit in the least
 * significant byte is 1
 **/
int one_in_small_byte(int x) {
	return (x << (INT_SIZE-BYTE_SIZE)) && 1;
}

/**
 * Returns 1 if at least one bit in the most
 * significant byte is 0
 **/
int zero_in_big_byte(int x) {
	int shift = INT_SIZE-BYTE_SIZE;
	int mask = 0xFFFFFF;
	int no_zero = 0xFFFFFFFF;
	x |= (x ^ mask); 		
	x ^= no_zero;
	return x && 1;
}
