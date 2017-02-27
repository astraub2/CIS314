#include <stdio.h>

int main(void){
int a1[5];  // declare a static array, a1, of 100 ints

printf("array is %X\n", a1);

// accessing array elements using indexing
for(int i=0; i < 5; i++) {
  a1[i] = 5;   
}
for (int i=0; i<5; i++){
		printf("Value %d ", a1[i]);
	}
}