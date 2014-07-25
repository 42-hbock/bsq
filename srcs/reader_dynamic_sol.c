/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader_dynamic_sol.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbock <hbock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/21 19:50:38 by hbock             #+#    #+#             */
/*   Updated: 2014/07/21 19:50:39 by hbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "dynamic_sol.h"

void		map_test(int fd)
{
	char	*std_in;

	std_in = take_stdin(fd);
	if (!ft_strcmp(std_in, "error"))
		map_error();
	else
	{
		if (check_map(std_in))
			map_error();
		else
			dyna_sol(std_in);
		if (std_in)
			free(std_in);
	}
}

void		av_manage(int ac, char **maps)
{
	int		i;
	int		fd;

	i = -1;
	while (++i < ac)
	{
		fd = open(maps[i], O_RDONLY);
		map_test(fd);
		close(fd);
	}
}
