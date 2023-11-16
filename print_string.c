#include "monty.h"

/**
 * print_string - print the string starting at the top of stack
 * @head: the head of the stack
 * @line_n: the line number
 * Return: Return nothing
 */
void print_string(stack_t **head, unsigned int line_n)
{
stack_t *h;
(void)line_n;

h = *head;
while (h)
{
if (h->n > 127 || h->n <= 0)
	break;
printf("%c", h->n);
h = h->next;
}
printf("\n");
}
