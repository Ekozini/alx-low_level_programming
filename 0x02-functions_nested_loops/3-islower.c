#include "main.h"
/**
 * _islower - function to check for the lowercase character
 * @c: is the int that will use the rgument of the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
