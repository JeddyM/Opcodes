#include "monty.h"

/**
 * pchar - prints the first char in the top of the stack.
 * @stk: the stack.
 * @line_number: the line number.
 *
 * Return: void.
 */
void pchar(stack_t **stk, unsigned int line_number)
{
	if (stk == NULL || *stk == NULL)
	{
		line_number++;
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (isascii(variables.temp))
		printf("%c\n", variables.temp);
	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n",
			line_number);
		exit(EXIT_FAILURE);
	}
}
