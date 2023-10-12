#include <stdio.h>
/**
 * main- the entry pointe
 *
 * Description: puchar functin
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
		putchar('\n');
	}
	return (0);
}
