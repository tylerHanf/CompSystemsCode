#include <stdio.h>
void show_short(int s) {
	for (int i=0; i<4; i++){
		printf("%02x", ((unsigned char*)&s)[i]);
	}
	printf("\n");
}

int main(int argc, const char* argv[]) {
	int first = 0x01234567;
	show_short(first);
	return 0;
}
