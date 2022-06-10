#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int array[] = {10, 38, 72};
	int *array_ptr = array;

	printf(" first element: %i\n", *(array_ptr++));
	printf("second element: %i\n", *(array_ptr++));
	printf(" third element: %i\n", *array_ptr);

	exit(EXIT_SUCCESS);
}
