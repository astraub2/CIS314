#include <stdio.h>

array sort(array x, int length){
	//source code http://www.programmingsimplified.com/c/source-code/c-program-bubble-sort
	//below is an implementation of bubble sort
	for (c = 0 ; c < ( length - 1 ); c++)
  {
    for (d = 0 ; d < length - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
  return array;



}



void in_pace_swap(int* x, int*y){
	*x^= *y;
	*y^= *x;
	*x^=*y
}

int main(){
	x=1;
	y=2;
	in_place_swap(&x, &y);

	int length;

	int* array=malloc(length* sizeof(int));






	int array[10];

	for (int i=0; i<10; i++){
	array[i]=i;
	}
	printf("array is %X\n", array);
	printf("Dereferenced array is %d\n", *array);




	for int i=0; i<10; i++){
	printf("array[%d]= %d\n", i, array[i]);

}
}



}