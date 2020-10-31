#include <assert.h>
#include "variables.c"

void test(){
	FILE *tf;
	find(tf, 1);
	add(tf, 1);
	input(tf, 1);
	print(tf, 1);
	swap(tf, 1);
}
