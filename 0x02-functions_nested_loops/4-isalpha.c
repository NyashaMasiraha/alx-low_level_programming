#include "main.h"
/**
 * _isalpha - return 1 on letters characters and 0 for other characters
 * @c: The character in ASCII code
 * return: 1 for letters , 0  for non-alpahabet characters
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
