#include "monty.h"

/**
 * _pop - function that removes the top element of the stack.
 * @stack: double pointer to head of the dlistint_t liststack.
 * @line_number: line on the monty code where this function was called.
 *
 * Return: void.
 */

void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		close(fd);
		exit(EXIT_FAILURE);
	}
	if (node->next == NULL)
	{
		*stack = NULL;
		free(node);
		return;
	}
	*stack = node->next;
	node->next->prev = NULL;
	free(node);
}
