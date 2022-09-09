#include <stdio.h>
/**
 * main - this prints stuff
 * Description: using the main function
 * this program prints " A hefty sum
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'z' ; c >= 'a' ; c--)
{
	putchar(c);
}
putchar('\n');
return (0);
}
