/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbock <hbock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/21 19:50:38 by hbock             #+#    #+#             */
/*   Updated: 2014/07/21 19:50:39 by hbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SOLVER_H
# define	SOLVER_H

typedef struct	s_result
{
	int		place;
	int		size;
}				t_result;

typedef struct	s_infomap
{
	int		len_info_line;
	int		nb_line;
	int		width;
	char	empty;
	char	obstacle;
	char	filled;
}				t_infomap;

void			solve(char *map);
void			print_map_solution(char *map, t_result result, t_infomap info);

#endif