#include "main.h"
/**
 * _isalpha - to check if c is a letter, lowercase or uppercase
 * @c: is the int that would be used for the function argument
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	 else
		 return (0);
}
