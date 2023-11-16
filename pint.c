#include "monty.h"


/**
 * pint - print the top
 * @head: the stack head
 * @line_n: the line number
 * Return: Return nothing
 */
void pint(stack_t **head, unsigned int line_n)
{
if (*head == NULL)
{
fprintf(stderr, "L%u: Can't pint, stack empty\n", line_n);
fclose(m.file);
free(m.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
printf("%d\n", (*head)->n);
}
