/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 19:32:28 by iohayon           #+#    #+#             */
/*   Updated: 2019/01/26 19:36:19 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*tmp;

	if (begin_list && *begin_list)
	{
		tmp = *begin_list;
		while (tmp->next)
			tmp = tmp->next;
	}
	else
		tmp = NULL;
	return (tmp);
	}
