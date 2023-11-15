#include "monty.h"

/**
 * push - function to push to a stack
 * @stack: pointer to the stack
 * @value: The value to insert
 * @line_number: Line number on the file
 *
 * Return: Void
 * Description: Function to push value to a stack
 */

void push(stack_t **stack, int value, unsigned int line_number)
{
stack_t *temp = malloc(sizeof(stack_t));
if (!temp)
{
monty_error("Error: malloc failed\n", line_number);
exit(EXIT_FAILURE);
}

temp->n = value;
temp->prev = NULL;

if (*stack != NULL)
{
temp->next = *stack;
(*stack)->prev = temp;
}
else
{
temp->next = NULL;
}

*stack = temp;
}


/**
 * pall - function to print all elements in a  stack
 * @stack: pointer to the stack
 * @line_number: Line number on the file
 *
 * Return: Void
 * Description: Function to print all elements in  a stack
 */


void pall(stack_t **stack, unsigned int line_number)
{
(void)line_number;
stack_t *current = *stack;
while (current)
{
printf("%d\n", current->n);
current = current->next;
}
}
