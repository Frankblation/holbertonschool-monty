#include "monty.h"

/**
 * pop - removes the top element of the stack.
 * @stack: Stack list
 * @line_number: Number of the line
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *current = NULL;

	if (*stack == NULL || stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pop an empty stack\n", line_number);
		cleanStack(stack);
		exit(EXIT_FAILURE);
	}

	current = *stack;

	*stack = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
}


/**
 * free_dlistint - Frees stack_t list.
 * @stack: Pointer to the head of the doubly linked list.
 */
void free_dlistint(stack_t *stack)
{
	stack_t *trav;

	while (stack != NULL)
	{
		trav = stack;
		stack = stack->next;
		free(trav);
	}
}