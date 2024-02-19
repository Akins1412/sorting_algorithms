#include "sort.h"

/**
 * inpution_sort_list - using inpution sorts
 *
 * @list: points to the head of the list.
 */
void inpution_sort_list(listint_t **list)
{
	listint_t *pointer, *input;
	listint_t *nodes; /*Keeps track of the current nodes*/

    /*List is empty*/
	if (list == NULL || *list == NULL || (*list)->next == NULL) /*or one nodes*/
		return;

	for (nodes = (*list)->next; nodes != NULL; nodes = pointer)
	{
		pointer = nodes->next;
		input = nodes->prev;
		while (input != NULL && nodes->n < input->n)
		{
			nodess_switch(list, &input, nodes);
			print_list((const listint_t *)*list);
		}
	}
}
