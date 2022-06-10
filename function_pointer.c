#include <stdio.h>

int add(int a, int b)
{
	return (a + b);
}

void print_hello(char *name)
{
	printf("Hello %s.\n", name);
}

int main(void)
{
	int (*p)(int, int);
	void (*q)(char*);

	p = &add;
	q = print_hello;

	q("Benjamin Faruna");
	printf("The sum of %d, %d is %d.\n", 3, 5, p(3, 5));

	return (0);
}
