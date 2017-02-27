#include <stdio.h>

#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

#define VECTOR_SIZE 8


typedef long long data_t;
typedef data_t *vec_ptr;

data_t * get_vec_start(vec_ptr v) {
return v;
}
int vec_length(vec_ptr v) {
return VECTOR_SIZE;
}

void inner4(vec_ptr u, vec_ptr v, data_t *dest) {
  long int i;
  int length = vec_length(u);
  data_t *udata = get_vec_start(u);
  data_t *vdata = get_vec_start(v);
  data_t sum = (data_t) 0;
    
  for (i = 0; i < length; i++){
    sum = sum + udata[i] * vdata[i];
  }  
  *dest = sum;
  
}
int main() {
	data_t *sum;
	// u,v as being arrays which hold elements of type 
	//long long, with length 8. 
 
	vec_ptr u;
	vec_ptr v;

	struct timeval start;
	gettimeofday(&start, NULL);
	

	// Do this 100000 times to exaggerate the time taken.	
	for (int i = 0; i < 100000; ++i) {

	inner4(u,v, sum);
	
		}

	struct timeval current;
	gettimeofday(&current, NULL);

	long long elapsed = (current.tv_sec - start.tv_sec)*1000000LL + (current.tv_usec - start.tv_usec);
	printf("%f\n", elapsed/1000000.0);
	}
