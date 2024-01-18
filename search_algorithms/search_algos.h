#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @index: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */

typedef struct listint_s
{
		int n;
		size_t index;
		struct listint_s *next;
} listint_t;



int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
