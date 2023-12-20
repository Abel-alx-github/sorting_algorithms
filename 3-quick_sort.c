#include "sort.h"
#include <stdio.h>

/**
*sort - sorts the array asecending order
*@lo: the lower boundary of array to be sort
*@hi: the higher boundery of array to be sorted
*@size: size of the array
*@array: array to be sorted
*/
void sort(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo >= hi)
		return;

	p = pivot(array, lo, hi, size);
	sort(array, lo, p - 1, size);
	sort(array, p + 1, hi, size);
}


/**
*pivot - partition the array
*@lo: the lower boundary of array to be sort
*@hi: the higher boundery of array to be sorted
*@size: size of the array
*@array: array to be sorted
*Return: returns the pivot index
*/
int pivot(int *array, int lo, int hi, size_t size)
{
	int i;

	i = lo;

	while (lo < hi)
	{
		if (array[lo] < array[hi])
		{
			if (i < lo)
			{
				swap_int(&array[i], &array[lo]);
				print_array(array, size);
			}
			i++;
		}
		lo++;
	}
	if (array[i] > array[hi])
	{
		swap_int(&array[i], &array[hi]);
		print_array(array, size);
	}
	return (i);
}
/**
*quick_sort - quick sorting function
*@size: size of array
*@array: array to be sorted
*/
void quick_sort(int *array, size_t size)
{
	int hi;

	if (array == NULL || size < 2)
		return;
	hi = size - 1;

	sort(array, 0, hi, size);
}

/**
*swap_int - swaps two integer
*@a: first int to be swapped
*@b: second int to be swapped
*
*/
void swap_int(int *a, int *b)
{

	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

