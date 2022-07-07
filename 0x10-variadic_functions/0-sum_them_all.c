#include <stdarg.h>
/**
 * sum_them_all - sums all parameters
 * @n: a counting parameter
 *
 * Return: 0 if n == 0, otherwise sum.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum = 0;

va_start(ap, n);
if (n == 0)
{
return (0);
}
else
{
for (i = 0; i < n; i++)
{
sum += va_arg(ap, const unsigned int);
}
}
va_end(ap);
return (sum);
}
