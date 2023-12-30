/* Sample program to illustrate how to use function pointers */
#include <stdio.h>

typedef int MYFUNC(int a, int b);

int add(int a, int b) {
	printf("This is the add function\n");
	return a + b;
}

int sub(int a, int b) {
	printf("This is the subtraction function\n");
	return a - b;
}

int opfunc(int a, int b, MYFUNC *f) {
	return f(a, b);
}

int main(int argc, char *argv[]) {

	int a = 10, b = 5;	
	printf("Passing add function....\n");
	printf("Result = %d\n", opfunc(a, b, add));
	printf("Passing sub function....\n");
	printf("Result = %d\n", opfunc(a, b, sub));

	return 0;
}
