#include "monty.h"

/**
 * mul - multiples the top two elements of the stack
 * @head: the stack head
 * @line_n: the line number of the stack
 * Return: Return nothing
 */
void mul(stack_t **head, unsigned int line_n)
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
fprintf(stderr, "L%d: Can't multiply, stack too short\n", line_n);
fclose(m.file);
free(m.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
temp = h->next->n * h->n;
h->next->n = temp;
*head = h->next;
free(h);
}
