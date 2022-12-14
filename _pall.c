#include "monty.h"

/**
 * _pall - function that prints all the elements on the stack.
 * @stack: pointer to the head of the stack.
 * @line_number: line in monty code of where this function was called
 *
 * Return: void.
 */

void _pall(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *h = *stack;

	if (h == NULL)
		return;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
