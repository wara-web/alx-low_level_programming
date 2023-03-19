#include <stdio.h>
#include<stdlib.h>
#include <time.h>

/**
 * main - displays all single digits 0-9
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char k;

	for (k = '0'; k <= '9'; k++)
	putchar(k);
	putchar('\n');
	return (0);
}
