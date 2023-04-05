#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: input 
 * @size: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int v, n, sum1 = 0, sum2 = 0;

	for (v = 0 v <= (sixe * size); v = v + size + 1)
		sum1 = sum1 + a[v];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		sum2 = sum2 + a[n];
	printf("%d, %d\n", sum1, sum2);
}
