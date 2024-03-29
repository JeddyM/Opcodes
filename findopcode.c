#include "monty.h"

/**
 * findOps - finds OpCode match and then executes the OpCode.
 * @token: token command passed.
 * @stk: the stack.
 * @line_number: the line number.
 *
 * Return: void
 */
void findOps(char *token, stack_t **stk, unsigned int line_number)
{
	int a = 0;

	instruction_t op[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"sub", sub},
		{"div", _div},
		{"mul", _mul},
		{"nop", _nop},
		{"pchar", pchar},
		{"pstr", pstr},
		{"mod", _mod},
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
		{"pchar", pchar},
>>>>>>> parent of 60eb040... Fixing errors
=======
		{"rotl", rotl},
		{"rotr", rotr},
>>>>>>> 60eb040f285eb64af805e01e803efb1b5244c501
=======
>>>>>>> parent of 4c14d99... Removing files
		{NULL, NULL}
	};

	while (op[a].opcode != NULL)
	{
		if (strcmp(token, op[a].opcode) == 0)
		{
			op[a].f(stk, line_number);
			return;
		}
		a++;
	}
	line_number++;
	fprintf(stderr, "L%d: unknown instruction %s\n",
		line_number, token);
	free_stk(stk, line_number);
	exit(EXIT_FAILURE);

}
