#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that adds new nodes at the end of a linked list
 * @head: double pointer to the list_t list ( node)
 * @str: New node added at the end
 *
 * Return: pointer to the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;
	unsigned int len = 0;

	tmp = *head;
	if (head == NULL)
		new_mode = create_mode(str);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new_node = *head;
		return (*head);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;
	        return (new_node);
}
/**
 * create_node: a funtion that creates a node
 * @str: string that will be inputed in a new node that was created
 * Return: the pointer to the node created
 */
list_t *create_node(const char *str)
{
	list_t *new_mode;

