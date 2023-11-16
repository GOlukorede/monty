#include "monty.h"

/**
 * push_d - add node to the stack
 * @head: the head of the stack
 * @line_n: the line number of the file
 * Return: Return nothing
 */
void push_d(stack_t **head, unsigned int line_n)
{
int n;
int i = 0;
int flag = 0;

if (m.arg)
{
if (m.arg[0] == '-')
	i++;
for (; m.arg[i] != '\0'; i++)
{
if (m.arg[i] > 57 || m.arg[i] < 48)
	flag = 1;
}
if (flag == 1)
{
fprintf(stderr, "L%d: usage: push integer\n", line_n);
fclose(m.file);
free(m.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
}
else
{
fprintf(stderr, "L%d: usage: push integer\n", line_n);
fclose(m.file);
free(m.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
n = atoi(m.arg);
if (m.stackMode == 0)
	add_node(head, n);
else
add_queue(head, n);
}
