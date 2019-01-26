/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 19:02:34 by iohayon           #+#    #+#             */
/*   Updated: 2019/01/26 19:30:10 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		size;
	t_list	*tmp;

	size = 0;
	if (begin_list && *begin_list)
	{
		tmp = *begin_list;
		while (tmp->next)
		{
			tmp = tmp->next;
			size++;
		}
	}
	return (size);
}
