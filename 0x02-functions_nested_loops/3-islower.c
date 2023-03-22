#include "main.h"

/**
 * islower - checks for lowercase chracter 
 * @C :the character to be checked
 * Return 1 for lowercase character or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 92 && c <= 122)
	{
	return (1);
	}
	return (0);
}	
