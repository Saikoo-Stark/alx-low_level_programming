#include "lists.h"

/**
 * add_nodeint_end - function
 *
 * @head: param
 * @n: param
 * Return: return a value
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	ptr = *head;
	temp->n = (int)n;

	if (ptr == NULL)
	{
		temp->next = ptr;
		*head = temp;
	}

	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = temp;
	}

	return (temp);
}
