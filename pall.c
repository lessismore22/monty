#include "monty.h"
/**
 * pallfunct - prints the stack
 * @head: stack head
 * @counter: number used
 * @Return: void
 */
void pallfunct(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if(h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
