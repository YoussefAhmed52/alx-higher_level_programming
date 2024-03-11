#include <stdio.h>
#include <stlib.h>
#include "lists.h"

/**
 * check_cycle - check if the list is cycle
 * @list: pointer list
 * Return: 1 if cycle, 0 if not
 */

int check_cycle(listint_t *list)
{
	listint_t *s = list, *f = list;

	while (f && f->next)
	{
		s = s->next;
		f = f->next->next;
		if (s == f)
			return (1);
	}
	return (0);
}
