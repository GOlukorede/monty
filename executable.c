#include "monty.h"

/**
 * executable - execute the opecode
 * @stack: the head linked list stack
 * @line_n: the number of lines
 * @file: pointer pointing tp the monty file
 * @content: the content of the line
 * Return: Return nothing
 */
int executable(char *content, stack_t **stack, unsigned int line_n, FILE *file)
{
instruction_t open_stack[] = {
{"push", f_push}, {"pall", f_pall},
{"pint", f_pint}, {"pop", f_pop},
{"add", f_add}, {"nop", f_nop},
{"sub", f_sub}, {"div", f_div},
{"mul", f_mul}, {"mod", f_mod},
{"swap", f_swap}, {"pchar", printChar},
{"pstr", print_string}, {"queue", f_queue},
{"stack", f_stack}, {"rotl", top_rotate},
{"rotr", bottom_rotate},
{NULL, NULL}
};
unsigned int i = 0;
char *optr;

optr = strtok(content, " \n\t");
if (optr && optr[0] == '#')
	return (0);
m.arg = strtok(NULL, " \n\t");
while (open_stack[i].opcode && optr)
{
if (strcmp(optr, open_stack[i].opcode) == 0)
{
open_stack[i].f(stack, line_n);
return (0);
}
i++;
}
if (optr && open_stack[i].opcode == NULL)
{
fprintf(stderr, "L%d: unknown instruction %s\n", line_n, optr);
fclose(file);
free(content);
free_stack(*stack);
exit(EXIT_FAILURE);
}
return (1);
}
