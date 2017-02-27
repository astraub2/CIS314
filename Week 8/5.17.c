#include <stdio.h>


#define VECTOR_SIZE 8
typedef long long data_t;
typedef data_t *vec_ptr;
data_t * get_vec_start(vec_ptr v) {
return v;
}
int vec_length(vec_ptr v) {
return VECTOR_SIZE;
}
void inner4(vec_ptr u, vec_ptr v, data_t *dest)
	{
	    long int i;
	    long int length = vec_length(u);
	    long int length = vec_length(v);
	    long int limit = length-3; 
	    data_t *udata = get_vec_start(u);
	    data_t *vdata = get_vec_start(v);
	    //parallel accumulation
	    data_t sum = (data_t) 0; 
	    data_t sum1 = (data_t) 0; 
	    data_t sum2 = (data_t) 0;
	    data_t sum3 = (data_t) 0;

	    //unrolls 4 at a time
	    for (i = 0; i < limit; i += 4) {
	        sum += (udata[i] * vdata[i]);
		sum1 += (udata[i+1] * vdata[i+1]);
		sum2 += (udata[i+2] * vdata[i+2]);
		sum3 += (udata[i+3] * vdata[i+3]);
	    }
	    for (; i < limit; i++) {
		sum = sum data[i];
	    }
	    
	    *dest = sum + sum1 + sum2 + sum3;
	}
int main() {
	data_t *sum;
	
	
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
	}
