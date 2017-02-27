#include <stdio.h>

int any_odd_one(unsigned x) {
	//the magic
	return ((x&0xAAAAAAAA) != 0);
}
int test(unsigned x){
	//checks stuff for me
	if (any_odd_one(x)){
		printf("1 ");
	}
	else{
		printf("0 ");
	}

}

int main(){
	test(0x0);
	test(0x1);
	test(0x2);
	test(0x3);
	test(0xFFFFFFFF);
	test(0x55555555);



}