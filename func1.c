#include "monty.h"
int value;
/**
 * _push - push item
 * @stack: is a parameter
 * @line_number: is value
 */
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;
	(void)line_number;

	new = new_Node(value);

	new->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
}
/**
 * _pall - print elements stack
 * @stack: is a parameter
 * @n: is value
 * Return: nothing
 */
void _pall(stack_t **stack, unsigned int n)
{
	stack_t *current = NULL;
	(void)n;

	current = *stack;

	while (current != NULL)
	{
		dprintf(STDOUT_FILENO, "%d\n", current->n);
		current = current->next;
	}
}

/**
 * _pint - prints the value at the top of the stack.
 * @stack: Stack list
 * @line_number: Number of the line
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	if (!*stack || !stack)
	{
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n", line_number);
		cleanStack(stack);
		exit(EXIT_FAILURE);
	}
	else
		dprintf(STDOUT_FILENO, "%d\n", (*stack)->n);
}
