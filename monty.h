#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <fcntl.h>
#include <stdarg.h>
#include <sys/types.h>

void push(stack_t **stack, int value, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void process_file(FILE *file, stack_t **stack, unsigned int *line_number,
instruction_t *instructions);
void execute_instruction(char *opcode, stack_t **stack,
unsigned int line_number, instruction_t *instructions);

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
 * struct monty_t - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @stackMode: flag to change stack queue
 * Description: carries values through the program
 */
typedef struct monty_t
{
	char *arg;
	FILE *file;
	char *content;
	int stackMode;
}  monty_t;
extern monty_t m;

#endif
