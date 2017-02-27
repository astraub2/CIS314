#include <stdio.h>


int main(){
	int i;
	int result=0;
	//these loops all do the same thing
	for(i=1; i<11; i++){
		result+=i;
	}
	while(i<11){
		result+=i;
		i++;
	}
	do{
		result+=i;
		i++;
	}while(i<11);

	loop:
		result+=i;
		i++;
		if(i<11)
			goto loop;
	//write assembly straight in c
	//fun stuff
	


printf("result=%d\n", result);

}//returns 1