#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse
 * followed by a new line
 * Return: Always 0 (Succes)
 */
int main(void)
{

	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
