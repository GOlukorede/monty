#include "monty.h"


/**
 * sub - substract from two elements stack
 * @head: the head of the stack
 * @line_n: the line number
 * Return: Return nothing
 */
void sub(stack_t **head, unsigned int line_n)
{
stack_t *temp;
int diff;
int nodes;

temp = *head;
for (nodes = 0; temp != NULL; nodes++)
	temp = temp->next;
if (nodes < 2)
{
fprintf(stderr, "L%d: Can't substract, stack too short\n", line_n);
fclose(m.file);
free(m.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
temp = *head;
diff = temp->next->n - temp->n;
temp->next->n = diff;
*head = temp->next;
free(temp);
}
