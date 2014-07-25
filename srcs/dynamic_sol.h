/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamic_sol.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbock <hbock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/21 19:50:38 by hbock             #+#    #+#             */
/*   Updated: 2014/07/21 19:50:39 by hbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DYNAMIC_SOL_H
# define	DYNAMIC_SOL_H

typedef struct	s_ma
{
	int		**trice;
	int		**tmp;
	int		i;
	int		j;
	int		i_max;
	int		j_max;
}				t_ma;

void			dyna_sol(char *map);
void			print_matrice(t_ma ma, t_infomap info);

#endif
