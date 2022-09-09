#include <stdio.h>
/**
 * main - this prints in base sixteen
 *
 * Description: using the main cog
 * this program prints " the characters in base 16
 * Return: 0
 */
int main(void)
{
char c;
for (c = '0' ; c <= '9' ; c++)
{
	putchar(c);
}
for (c = 'a' ; c <= 'f' ; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
