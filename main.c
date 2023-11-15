#include "monty.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: zero(0)
 */

int main(int argc, char *argv[])
{
if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}

FILE *file = fopen(argv[1], "r");
if (!file)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}

stack_t *stack = NULL;
unsigned int line_number = 0;

instruction_t instructions[] = {
{"push", push},
{"pall", pall},
{NULL, NULL}
};

process_file(file, &stack, &line_number, instructions);

fclose(file);
free_stack(stack);

return (0);
}


/**
 * process_file - Function to process a file
 * @file: The file
 * @stack: Pointer to stack
 * @line_number: Line number on the file
 * @instructions: Execution functions
 *
 * Return: NULL
 */

void process_file(FILE *file, stack_t **stack,
unsigned int *line_number, instruction_t *instructions)
{
char buffer[1024];

while (fgets(buffer, sizeof(buffer), file))
{
(*line_number)++;

char *opcode = strtok(buffer, " \t\n\r");
if (opcode == NULL || opcode[0] == '#')
continue;

execute_instruction(opcode, stack, *line_number, instructions);
}
}

/**
 * execute_instruction - Function to execute instructions
 * @opcode: Code in the file
 * @stack: Pointer to stack
 * @line_number: Line number on the file
 * @instructions: Execution functions
 *
 * Return: NULL
 */

void execute_instruction(char *opcode, stack_t **stack,
unsigned int line_number, instruction_t *instructions)
{
int i;
for (i = 0; instructions[i].opcode != NULL; i++)
{
if (strcmp(opcode, instructions[i].opcode) == 0)
{
instructions[i].f(stack, line_number);
break;
}
}

if (instructions[i].opcode == NULL)
{
monty_error("L%u: unknown instruction %s\n", line_number, opcode);
}
}
