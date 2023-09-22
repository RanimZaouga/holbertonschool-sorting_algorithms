#include "sort.h"
/**
 * insertion_sort_list - function that sort  list
 * @list: the list
 */
void insertion_sort_list(listint_t **list)
{
	struct listint_s *currentNode, *swapNode, *prevNode;


	if (list == NULL || *list == NULL)
		return;


	currentNode = *list;
	while ((currentNode = currentNode->next))
	{
		swapNode = currentNode;
		while (currentNode->prev != NULL
				&& currentNode->prev->n > currentNode->n)
		{
			prevNode = currentNode->prev;
			if (swapNode->next != NULL)
				swapNode->next->prev = prevNode;
			if (prevNode->prev != NULL)
				prevNode->prev->next = swapNode;
			else
				*list = swapNode;



			prevNode->next = swapNode->next;
			swapNode->prev = prevNode->prev;
			swapNode->next = prevNode;
			prevNode->prev = swapNode;
			print_list(*list);




		}

	}
}
