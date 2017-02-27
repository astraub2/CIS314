#include <stdio.h>
#include <string.h>
// an unsigned value will always be greater than 0. The  sizeof operator
//returns an unsigned value size_t
//solution: redo the if statement conditional

void copy_int(int val, void *buf, int maxbytes) {
	if (maxbytes>= sizeof(val))
		memcpy(buf, (void *) &val, sizeof(val));
	
}

void main(){
	//for the below test, sizeof(int) == 4, so the memcpy 
	//should be skipped since max_bytes is < 4.
	char array[24];
	copy_int(1, array, 1);


}