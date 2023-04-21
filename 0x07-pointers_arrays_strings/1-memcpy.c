#include "main.h"

/**
 * _memcpy - a function that copies the memory area 
 * @dest: the storage memory
 * @src: memory where the function is copied
 * @n: number of bytes
 * Return: memory copied with its bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
