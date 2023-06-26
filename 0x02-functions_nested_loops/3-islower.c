#include "main.h"
/**
 * _islower - checks for lower case character
 * @C: the character in ASCII code
 * Return: 1 if charcter is lower case, 0 for the rest
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
