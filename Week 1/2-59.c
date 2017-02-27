#include <stdio.h>
typedef unsigned char *byte_pointer;

int least(unsigned int x){
	//identify least significant byte
	unsigned int y=x << 24;
	y=y>>24;
	return y;
}
int cut(unsigned int y){
	//isolate all but least significant bytes of y
	unsigned int x=y>>8;
	x=x<<8;
	return x;
}
int combiner(unsigned int x, unsigned int y){
	//combines spliced bytes into a new bit
	unsigned int l=least(x);
	unsigned int newy=cut(y);
	int z=l|newy;
	printf("combined:0x%X\n", z);
}



void main(unsigned int x, unsigned int y){
	combiner(0x89ABCDEF, 0x76543210);

}