#include "sort.h"

/**
 * selection_sort - sorts an array of (int), Selection sort
 * @array: the array to be sorted
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	int tempo, mini_posi = 0;
	size_t j, k;

	if (array == NULL || size < 2)
		return;

	/*Does not sort an array with <2 elements*/
	for (j = 0; j < size - 1; j++)
	{
		mini_posi = j;

		/*Start sorting from the element after the current ...*/
		/*... element at `mini_posi`*/
		for (k = j + 1; k < size; k++)
		{
			if (array[k] < array[mini_posi])
				mini_posi = k;
		}

		if (mini_posi != (int) j) /*Cases where a swap isn't necessary*/
		{
			tempo = array[j];
			array[j] = array[mini_posi];
			array[mini_posi] = tempo;
			print_array(array, size);
		}
	}
}
