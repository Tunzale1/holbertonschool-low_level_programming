#include "search_algos.h"
/**
 * binary_search -  sorted array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value: is the value to search for
 * Return:  index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, sol, sag;

	if (array == NULL)
		return (-1);

	for (sol = 0, sag = size - 1; sag >= sol;)
	{
		printf("Searching in array: ");
		for (i = sol; i < sag; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = sol + (sag - sol) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			sag = i - 1;
		else
			sol = i + 1;
	}
	return (-1);
}
