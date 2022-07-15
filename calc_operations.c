#include "monty.h"

/**
 * add - add the top two elements of the stack.
 * @stk: the stack.
 * @line_number: the linenumber.
 *
 * Return: void
 */
void add(stack_t **stk, unsigned int line_number)
{
	int sum;

	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)
	{
		line_number++;
		fprintf(stderr, "L%d: can't add, stack too short\n",
			line_number);
		free_stk(stk, line_number);
		exit(EXIT_FAILURE);
	}

	sum = variables.temp;
	pop(stk, line_number);
	sum += variables.temp;
	pop(stk, line_number);
	variables.temp = sum;
	push(stk, line_number);
}
