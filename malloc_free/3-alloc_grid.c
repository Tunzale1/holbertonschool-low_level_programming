#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - that returns a pointer to a 2 dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: a pointer to a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * (height));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			while (i--)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
