#include <stdio.h>

typedef unsigned packed_t;
//
// Fired predicesors code only works on possitive values
//
int xbyte(packed_t word, int bytenum)
{
	// isolate most significant bit
	int byte = word << ((3 - bytenum) << 3);
	// extend it to 32 bit signed value
	printf("0x%X\n", (byte>>24));

}

int main(){
	xbyte(0x11223344, 0);
	xbyte(0x11223344, 2);
	xbyte(0xAABBCCDD, 0);
	xbyte(0xAABBCCDD, 2);
	xbyte(0x80000000, 3);

}