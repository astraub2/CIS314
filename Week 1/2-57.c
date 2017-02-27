#include <stdio.h>

typedef unsigned char *byte_pointer;


void show_bytes(byte_pointer start, int len) {
	int i;
	for (i = 0; i < len; i++)
		printf(" %.2x", start[i]);
	printf("\n");
 }


void show_long(long x) {
	show_bytes((byte_pointer) &x, sizeof(long));
 }
 void show_short(short x) {
	show_bytes((byte_pointer) &x, sizeof(short));
 }
 void show_double(double x) {
	show_bytes((byte_pointer) &x, sizeof(double));
 }

void main(){
	//line 26 for testing purposes only
	int ival = 5;

	short sval=(short) ival;
	long lval=(long) ival;
	double dval=(double) ival;

	show_short(sval);
	show_long(lval);
	show_double(dval);


}