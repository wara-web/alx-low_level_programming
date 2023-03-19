#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - prints double nums separated by space
 * Return: Always 0 (success)
 *
 **/


int main(void)

{
	int k, b;

	for (k = 0; k <= 98; k++)
	{
		for (b = 0; b <= 98; b++)
		{
			putchar((k / 10) + '0');
			putchar((k % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (k == 98 && b == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
