#include "monty.h"

/**
 * pall - Print all values on the stack
 * @stack: pointer to head of stack
 * @line_num: file's line number
 * Return: Void
 */

void pall(stack_t **stack, unsigned int line_num)
{
	stack_t *h = *stack;
	(void)line_num;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

/**
 * push - adds to the top of the stack
 * @stk: the top of stack
 * @line_number: the token line number
 *
 * Return: void
 */
void push(stack_t **stk, unsigned int line_number)
{
	stack_t *new;

	if (stk == NULL)
	{
		fprintf(stderr, "L%d: unknown stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stk(stk, line_number);
		exit(EXIT_FAILURE);
	}
	new->n = variables.temp;
	new->prev = NULL;
	new->next = *stk;

	if (*stk != NULL)
		(*stk)->prev = new;
	*stk = new;
}

