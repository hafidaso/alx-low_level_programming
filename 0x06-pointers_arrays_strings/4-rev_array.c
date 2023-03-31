/**
 *reverse_array - Reverse elements of an array
 *@a: Array to be reversed
 *@n: number of elements of the array
 *Return: Void
 */
#include <stddef.h>
void reverse_array(int *a, size_t n)
{
	int temp;
	size_t i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
