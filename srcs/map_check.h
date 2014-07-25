/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbock <hbock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/21 19:50:38 by hbock             #+#    #+#             */
/*   Updated: 2014/07/21 19:50:39 by hbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MAP_CHECK_H
# define	MAP_CHECK_H

int			check_map_cperline_lines(char *map, int start);
int			minimun_length(char *map);
int			len_num(char *map);
int			check_map(char *map);
int			get_waited_line(char *map, int end);

#endif