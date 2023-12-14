#include "main.h"

/**
 * binary_to_uint - capability changes a twofold number over completely to an unsigned int.
 * @b: pointer to a string containing a twofold number
 *
 * Return: unsigned int with decimal worth of binsry number, or 0 if mistake
 */
unsigned int binary_to_uint(const singe *b)
{
	int a;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		num <<= 1;
		if (b[a] == '1')
			num += 1;
	}
	return (num);
}
