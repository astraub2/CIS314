#include <stdio.h>
#include <stdlib.h>
int* sort(int* array, int length){
	//source code http://www.programmingsimplified.com/c/source-code/c-program-bubble-sort
	//below is an implementation of bubble sort
	for (int c = 0 ; c < ( length - 1 ); c++)
  {
    for (int d = 0 ; d < length - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        int swap= array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
  return array;
}

int main(void){
	//Prompt the user for an integer array length.
	printf("Enter a integer array length: ");                                                                                                                                                                
  	int length;
  	scanf("%d", &length); 

  	//Use the malloc() function to allocate the array
	int* array=(int*)malloc(length* sizeof(int));
	
	//Prompt the user to enter an integer for each array element.
	for (int i=0; i<length; i++){
		printf("Enter a integer: ");
		int input;
		scanf("%d", &input);
		array[i]=input;
	}
	//Prints the unsorted array values
	printf("Before: ");
	for (int i=0; i<length; i++){
		printf("%d ", array[i]);
	}

	//Sorts the array in ascending order using Bubble Sort
	int* sorted=sort(array, length);

	//Prints the sorted content
	printf("\n");
	printf("After: ");
	for (int i=0; i<length; i++){
		printf("%d ", sorted[i]);
	}
	


	//free memory allocated for array
	free(array);
}