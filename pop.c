#include "monty.h"

/**
 * pops - print the top element
 * @head: the stack head
 * @line_n: the line number of function
 * Return: Return nothing
 */
void pops(stack_t **head, unsigned int line_n)
{
stack_t *h;

if (*head == NULL)
{
fprintf(stderr, "L%d: Can't pop an empty stack\n", line_n);
fclose(m.file);
free(m.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
*head = h->next;
free(h);
}
