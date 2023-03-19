#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - prints alphabets in reverse
 * Return: Always 0 (success)
 *
 **/

int main(void)
{
	char l;

	for (l = 'z'; l <= 'a'; l--)
	putchar(l);
	putchar('\n');
	return (0);
}
