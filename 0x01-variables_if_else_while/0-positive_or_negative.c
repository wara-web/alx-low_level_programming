#include <stdlib.h>

#include <time.h>

#include <stdio.h>
/**
 *main -prints if number is postive, zero or negative
 *Return: Always(Success)
 *
 */

int main(void)
{
	int n;

	srand (time(0));
	n = rand()- RAND_MAX / 2;

	if(n > 0)
	{
	printf("%d is positive");
	}
	else if(n == 0)
	{
	printf("%d is zero");
	}
	else
	{
	printf("%d is negative");
	}
	return(0);
}

