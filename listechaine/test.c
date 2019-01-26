/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 16:25:01 by iohayon           #+#    #+#             */
/*   Updated: 2019/01/26 17:52:04 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*add_link(t_list *list, char *str)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->str = str;
		tmp->next = list;
	}
	return (tmp);
}

void	ft_print_list(t_list *list)
{
	while (list) 
	{
		ft_putstr(list->str);
		list = list->next;
	}
}

int		main(void)
{
	t_list	*list;

	list = NULL;
	list = add_link(list, "Hello\n");
	list = add_link(list, "World\n");
	list = add_link(list, "Ilan\n");

	ft_print_list(list);
	return (0);
}
