#include "monty.h"

/**
 * print_top - print the character at the top of stack.
 * @head: pointer pointing to the head of stack
 * @line_n: the line number in the function
 * Return: Return nothing
 */
void print_top(stack_t **head, unsigned int line_n)
{
stack_t *h;

h = *head;

if (!h)
{
fprintf(stderr, "L%d: Can't print character, stack empty\n", line_n);
fclose(m.file);
free(m.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
if (h->n > 127 || h->n < 0)
{
fprintf(stderr, "L%d: Can't print character, stack out of range", line_n);
fclose(m.file);
free(m.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
printf("%c\n", h->n);
}
