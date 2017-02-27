#include <stdio.h>
#include <stdlib.h>

typedef struct ELE *tree_ptr;

struct ELE {
	long val;
	tree_ptr left;
	tree_ptr right;
};

long trace(tree_ptr tp){
	long x = 0;
	while(tp != 0)
	{
 	x = tp->val;
 	tp = tp->val;
	}
	//exit call, no specified return value
}
int main(void){
	//testing the validity of a tree using a trace iterater
	tree_ptr tp = malloc(sizeof(struct ELE));
 	(*tp).val = 6;
 	(*tp).left = NULL;
 	(*tp).right = NULL;
}