#include <stdio.h>

void display_bits(unsigned int value);

int main(void)
{
	unsigned int x;

	printf("Enter a non-negative int: ");
	scanf("%u", &x);

	display_bits(x);

	return (0);
}

void display_bits(unsigned int value)
{
	unsigned int c;
	unsigned int display_mask = 1 << 31;

	printf("%10u = ", value);

	for (c = 1; c <= 32; ++c)
	{
		putchar(value & display_mask ? '1' : '0');
		value <<= 1;

		if (c % 8 == 0)
		{
			putchar(' ');
		}
	}

	putchar('\n');
}
