#include <stdio.h>
int main(){
	unsigned int rgb= 0x11223344;
	printf("rgb: 0x%X\n", rgb);
	unsigned int a= rgb & 0xFF;
	printd("a:0x%X\n", a);
	unsigned int rgb=rgba >> 8;
	printf("rgb: 0x%X\n", rgb);
	unsigned int argb=(a<<24)| rgb;
	printf("rgb: 0x%X\n", rgb);






}