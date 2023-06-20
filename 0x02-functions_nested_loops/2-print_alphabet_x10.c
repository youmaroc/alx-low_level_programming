#include "main.h"
/**
* print_alphabet_x10 - prints the alphabets 1O times.
*
* Return: always 0 (reussit)
*/
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1;i <= 10; i++ )
	{	
		
		for (j = 97; j <= 122 ; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
