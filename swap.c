#include "monty.h"

/**
 * swap - adds elements to the top of the stack
 * @head: the stack head
 * @line_n: the line number
 * Return: Return nothing
 */
void swap(stack_t **head, unsigned int line_n)
{
stack_t *h;
int temp;
int length = 0;

h = *head;
while (h)
{
h = h->next;
length++;
}
if (length < 2)
{
fprintf(stderr, "L%d: Can't swap, stack too short\n", line_n);
fclose(m.file);
free(m.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
temp = h->n;
h->n = h->next->n;
h->next->n = temp;
}
