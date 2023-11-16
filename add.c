#include "monty.h"


/**
 * add - adds to the top two elements of the stack
 * @head: the stack head
 * @line_n: the line number of the stack
 * Return: Return nothing
 */
void add(stack_t **head, unsigned int line_n)
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
fprintf(stderr, "L%d: Can't add, stack too short\n", line_n);
fclose(m.file);
free(m.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
temp = h->n + h->next->n;
h->next->n = temp;
*head = h->next;
free(h);
}
