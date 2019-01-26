/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 16:21:21 by iohayon           #+#    #+#             */
/*   Updated: 2019/01/26 17:28:18 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
#define FT_LIST_H

#include <stdlib.h>
#include <unistd.h>

typedef struct		s_list
{
	char			*str;
	struct s_list	*next;
}					t_list;

t_list	*add_link(t_list *list, char *str);
void	ft_print_list(t_list *list);
void	ft_putchar(char c);
void	ft_putstr(char const *s);

#endif
