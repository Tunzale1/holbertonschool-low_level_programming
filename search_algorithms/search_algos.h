#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s
{
		int n;
		size_t index;
		struct listint_s *next;
} listint_t;



int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
