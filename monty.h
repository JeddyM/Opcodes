#ifndef MONTY_H
#define MONTY_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct var - temporarily variable and checker
 * @temp: temporarily variable
 * @check: check variable
 *
 * Description: store temp variable an check
 */
typedef struct var
{
	int temp;
	char check;
} var_t;

extern var_t variables;


void pall(stack_t **stack, unsigned int line_num);
void push(stack_t **stk, unsigned int line_number);
void pop(stack_t **stk, unsigned int line_number);
void free_stk(stack_t **stk, unsigned int line_number);
void pint(stack_t **stk, unsigned int line_number);

int main(int argc, char *argv[]);
void tokenizer(char *input, stack_t **stk, unsigned int line_number);
int is_num(char *token);
#endif
