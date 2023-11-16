#include "monty.h"

/**
 * pall_d - print the stack
 * @head: the head of the stack
 * @line_n: the line of the function line
 * Return: Return nothing
 */
void pall_d(stack_t **head, unsigned int line_n)
{
stack_t *h;
(void)line_n;

h = *head;
if (h == NULL)
	return;
while (h)
{
printf("%d\n", h->n);
h = h->next;
}
}
