//I had a lot of trouble with this problem, the answer below 
//I derived from this example: http://ideone.com/BfiPM8
void transpose(Marray_t A) {
    int i, j;
    int *start = &A[0][0];
    for (i=0; i<M; i++) {
        for (j=0; j<i; j++) {
            int* y = start + ((i*M)+j);
            int* u = start + ((j*M)+i);
            int temp;
            temp = *y;
            *y = *u;
            *u = temp;
        }
    }
}