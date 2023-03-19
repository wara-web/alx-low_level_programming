#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main -prints hexadecimal letters
 * Return: Always 0 (success)
 *
 **/

int main(void)
{
	int k;
	char b;

	for (k = '0'; k <='9'; k++)
	putchar(k);

	for (b = 'a'; b <= 'f'; b++)
	putchar(b);
	putchar('\n');
	return (0);
}

