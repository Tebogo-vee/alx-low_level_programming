#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - The sum of all its parameters.
 * @n: The number of the parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum.
 *
 * Return: if n == 0 - 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
