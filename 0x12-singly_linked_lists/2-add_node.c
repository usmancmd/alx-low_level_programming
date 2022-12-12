#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>


/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: head pointer
 * @str: string to be added
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
