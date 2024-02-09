#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int lenght, baseTwo;

	if (!b)
		return (0);

	ui = 0;

	for (lenght = 0; b[lenght] != '\0'; lenght++)
		;

	for (lenght--, baseTwo = 1; lenght >= 0; lenght--, baseTwo *= 2)
	{
		if (b[lenght] != '0' && b[lenght] != '1')
		{
			return (0);
		}

		if (b[lenght] & 1)
		{
			ui += baseTwo;
		}
	}

	return (ui);
}
