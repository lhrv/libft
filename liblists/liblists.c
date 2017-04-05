/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liblists.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 20:32:40 by lhorvat           #+#    #+#             */
/*   Updated: 2017/04/05 07:25:59 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_elem l_elem;
struct s_elem
{
    void *data;
    struct s_elem *next;
};

typedef struct s_listcontrol l_list;
struct s_listcontrol
{
	size_t	len;
    l_elem *first;
    l_elem *last;
};

l_list *init_list(char *data)
{
    l_list *liste = malloc(sizeof(*liste));
    l_elem *element = malloc(sizeof(*element));

    if (liste == NULL || element == NULL)
        exit(EXIT_FAILURE);
    element->data = data;
    element->next = NULL;
    liste->first = element;
    liste->last = element;
    liste->len = 1;
    return (liste);
}

l_list *list_insert_head(l_list *liste, char *newdata)
{
    if (!liste)
    {
    	liste = init_list(newdata);
    	return (liste);
    }
    l_elem *new_elem = malloc(sizeof(*new_elem));
    if (liste == NULL || new_elem == NULL)
        exit(EXIT_FAILURE);

    new_elem->data = newdata;
    new_elem->next = liste->first;
    liste->first = new_elem;
    liste->len++;
    return (liste);
}

l_list *list_insert_tail(l_list *liste, char *newdata)
{
	if (!liste)
    {
    	liste = init_list(newdata);
    	return (liste);
    }
    l_elem *new_elem = malloc(sizeof(*new_elem));
    if (liste == NULL || new_elem == NULL)
        exit(EXIT_FAILURE);

    new_elem->data = newdata;
    new_elem->next = NULL;
    liste->last->next = new_elem;
    liste->last = new_elem;
    liste->len++;
    return (liste);
}

l_elem 	*list_elem(l_list *list, size_t index)
{
	size_t i;
	l_elem *elem;
	i = 0;
	if (index > list->len - 1)
	{
		printf("out of list range (->exit)\n");
		exit(1);
	}
	else if (index  == (list->len) - 1 )
		return (list->last);

	elem = list->first;
	while (i < index)
	{
		elem = elem->next;
		i++;
	}
	return (elem);
}

void list_disp(l_list *list, size_t len)
{
    size_t i;
    i = 1;
    if (list == NULL)
    {
    	printf("(0)[NULL list]\n" );
        return;
    }
    if (len == 0)
    	len = (list)->len;
    printf("(%zu)[", (list)->len);
    while (i <= len)
        printf("'%s', ",  (char*)list_elem(list, i++ - 1)->data);
    if (list_elem(list, i - 2)->next == NULL) // à opti/à virer?
	    printf("(null end)");
	if (len != (list)->len)
		printf("...");
	printf("]\n");
}

void		*list_elem_del(l_list **list, size_t index)
{
	l_elem *prev;
	l_elem *to_del;
	void 	*to_free;
	
	if (!*list)
		return (0);
	if (index > (*list)->len - 1) 
		{ printf("list_elem_del : Index out of range (almost SegFault!)\n"); exit(1); }
	to_del = (*list)->first;
	if (!index)
		(*list)->first = (*list)->first->next;
	else
	{
		to_del = (prev = list_elem(*list, index - 1))->next;
		if (index == (*list)->len - 1)
			((*list)->last = prev)->next = NULL;
		else
			prev->next = prev->next->next;
	}
	to_free = to_del->data;
	free(to_del);
	if (--(*list)->len == 0)
	{
		free(*list);
		*list = NULL;
	}
	return (to_free);
}

void		list_free(l_list **list)
{
	void	*to_free;

	if (!*list)
		return;
	while ((to_free = list_elem_del(list, 0)))
		free(to_free);
	*list = NULL;
}
