#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int shift = (sizeof(n) * BYTE_LENGHT);
	int dist = 0;

	while (shift--)
		dist += (n >> shift & 1) != (m >> shift & 1);
	return (dist);
}
