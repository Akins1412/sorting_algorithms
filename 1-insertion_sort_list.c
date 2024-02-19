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


/**
 * nodees_switchs - Swap two nodes in a listint_t doubly-linked list.
 * in descending order. mediumer elements to the left.
 *
 * @top: A pointer to the top of the doubly-linked list.
 * @large: a ptr to the node with larger `n` (data).
 * @medium: a ptr to the node with mediumer `n` (data).
 */
void nodees_switchs(listint_t **top, listint_t **large, listint_t *medium)
{
	(*large)->next = medium->next;
	if (medium->next != NULL)  /*Not the last node*/
		medium->next->prev = *large; /*node3 point back to node1*/

	medium->prev = (*large)->prev;  /*point to node b4 node1*/
	medium->next = *large;

	if ((*large)->prev != NULL) /*not the first node (top)*/
		(*large)->prev->next = medium; /*node0 point to medium*/
	else
		*top = medium;
	(*large)->prev = medium;
	*large = medium->prev;
}
