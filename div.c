#include "monty.h"

/**
 * div - divides the top two elements of the stack
 * @head: the stack head
 * @line_n: the line number
 * Return: Return nothing
 */
void div(stack_t **head, unsigned int line_n)
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
fprintf(stderr, "L%d: Can't divide, stack too short\n", line_n);
fclose(m.file);
free(m.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
if (h->n == 0)
{
fprintf(stderr, "L%d: diving by zero\n", line_n);
fclose(m.file);
free(m.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
temp = h->next->n / h->n;
h->next->n = temp;
*head = h->next;
free(h);
}
