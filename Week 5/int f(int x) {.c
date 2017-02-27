#include <stdio.h>

int f(int x) {
 return 16*x;
}

int g(int a, int b) {
 return f(a) + f(b);
}

int main(void){
	g(1,2);
	prinf("done");


}