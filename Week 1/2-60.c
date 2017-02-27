#include <stdio.h>


unsigned replace_byte (unsigned int x, int i, unsigned char b){
	//this clears is bit I want to edit
	x=(x & ~(0xFF <<(8*i)));
	//this adds the bit I want
	x=x | b << (8*i);
	printf("final: 0x%X\n", x);

}
int main() {
	//test stuff
	replace_byte(0x12345678, 2, 0xAB);
	replace_byte(0x12345678, 0, 0xAB);
}