#include <stdio.h>
#include <string.h>
#include "lib.h"

const char* c_func (int num) {
	printf("[  c_func()]\tHere is your number: %d\n", num);
	return "{ response from c_func() }";
}

void times2 (int* n) {
	puts("[  times2()]\tDoubling...");
	*n *= 2;
}

struct exampleStruct struct_c_function(){
	struct exampleStruct a;
	a.a = 'i';
	puts(" printing a from c ");
	printf("%c", a.a);
	puts(" printing a from c ");
}

int access_array(int num)
{
	int number = num *2;
	return number;
}