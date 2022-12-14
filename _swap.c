#include "monty.h"

/**
 * _swap - swaps the top two elements of the stack.
 * @stack: head of the stack.
 * @line_number: number in file where this function was called.
 *
 * Return: void.
 */

void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;

	if (node == NULL || node->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		if (node != NULL)
			free(node);
		close(fd);
		exit(EXIT_FAILURE);
	}
	node->next->prev = NULL;
	node->prev = node->next;
	node->next = node->next->next;
	node->prev->next = node;
	*stack = node->prev;
}
