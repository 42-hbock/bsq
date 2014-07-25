/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbock <hbock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/21 19:50:38 by hbock             #+#    #+#             */
/*   Updated: 2014/07/21 19:50:39 by hbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *s)
{
	write(1, s, ft_strlen(s));
}

void		ft_putendl(char *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
