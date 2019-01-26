/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 17:41:26 by iohayon           #+#    #+#             */
/*   Updated: 2019/01/26 19:02:04 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
#define FT_LIST_H

#include <stdlib.h>
#include <unistd.h>

typedef struct      s_list
{
	void            *data;
	struct s_list   *next;
}					t_list;

t_list	*ft_create_elem(void *data);

#endif
