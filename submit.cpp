/*
Homework 4 : Cilkified Inner Products.
Team member 1 : Arne Bjune
Team member 2 : Vegar Engen
*/

#include <cilk.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <numeric>

#include "functions.h"

int rec_cilkified(int *a,int *b,unsigned int n)
{
	printf("A is %d long\n", sizeof a /sizeof(int));
	return 1;
}

int loop_cilkified(int *a,int *b,unsigned int n)
{
	int i, sum;
	for(i = 0; i <n; i++){
		//printf("%s\n", );
		sum = sum + a[n]*b[n];
	}
	printf("Sum %i\n", sum);
	return sum;
}

int hyperobject_cilkified(int *a,int *b,unsigned int n)
{
	return 1;
}

