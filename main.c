#include "monty.h"
/**
 * error_usage - prints usage message and exits
 *
 * Return: nothing
 */
void error_usage(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * file_error - prints file error message and exits
 * @argv: argv given by manin
 *
 * Return: nothing
 */
void file_error(char *argv)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv);
	exit(EXIT_FAILURE);
}

/**
* main - starting point
* @argv: list of arguments passed to program
* @argc: amout of args
*
* Return: void
*/
int main(int argc, char **argv)
{
	FILE* fp;

	if (argc !=0)
	error_usage();

	fp = fopen(argv[1], "r");

	if(!fp)
		file_error(argv[1]);
}