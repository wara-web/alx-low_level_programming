#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -print alphabets except q and e
 *
 * Return: Always 0 (success)
 *
 **/

int main(void)
{
	char n,e,q;
	
	e = 'e';
	q = 'q';
        
	for (n = 'a'; n <= 'z'; n++)
	{
	if (n != e && n != q)
	putchar(n);
	}
	putchar('\n');
	return (0);
}	
