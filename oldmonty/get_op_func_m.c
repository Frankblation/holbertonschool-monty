#include "monty.h"

/**
 * get_op_func - should contain the function that selects the correct
 * function to perform the operation asked by the use
 * @s: struct s (int, int)
 * Return: NULL
 */

void (*get_op_func(char *s))(stack_t **, unsigned int line_number)
{

instruction_t inst[] = {
		    {"push", push},
            {"pall", pall},
            {"pint", pint},
            {"pop", pop},
            {"swap", swap},
            {"add", add},
            {"nop", nop},
            {NULL,  NULL}

	};
	int i;

	i = 0;
	/* iterate over ops array */
	while (inst[i].opcode != NULL && strcmp(inst[i].opcode, s) != 0)
	{
		i++;
	}
	return (inst[i].f);
}
