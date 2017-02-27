#include <stdio.h>

int decode2(int x, int y, int z){
	//I'm not sure how to document this
	//I just interpreted the assembly 
	//and wrote this function
	int left = ((y-z) << 31) >> 31;
	int right = (y - z)*x;
	int sol = left^right;

	return sol;
 }

 int main(void){
 	//should be -2
 	printf("%d\n", decode2(1, 2, 4));
 	
 	//shoud be -16
 	printf("%d\n", decode2(-4, -8, -12));

 }