#include "sort.h"

/**
* bubble_sort - bubble sort to sort out alg
* @array: point array to be sorted
* @size: size of array

**/

void bubble_sort(int *array, size_t size)
{
	size_t j, k;
	int tempo;

	for (j = 0; j < size; j++)
	{
		for (k = 0; k < size - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				tempo = array[k + 1];
				array[k + 1] = array[k];
				array[k] = tempo;
				print_array(array, size);
				/* print_array(NULL, 0); print a new line*/
			}
		}
	}
}
