#include "monty.h"
/**
 * push - push item
 * @stack: is a parameter
 * @line_number: is value
 * @n: is the value of new_Node
 */
void push(stack_t **stack, unsigned int line_number)
{
    stack_t *new = NULL;
	(void)line_number;

	new->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
}