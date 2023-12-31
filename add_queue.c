#include "monty.h"

/**
 * add_queue - add node to the tail of the queue
 * @head: the head of the queue
 * @n: new value
 * Return: Return nothing
 */
void add_queue(stack_t **head, int n)
{
stack_t *new_node, *temp;

temp = *head;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
	printf("Error\n");
new_node->n = n;
new_node->next = NULL;
if (temp)
{
while (temp->next)
temp = temp->next;
}
if (!temp)
{
*head = new_node;
new_node->prev = NULL;
}
else
{
temp->next = new_node;
new_node->prev = temp;
}
}
