/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recup_in.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbock <hbock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/21 19:50:38 by hbock             #+#    #+#             */
/*   Updated: 2014/07/21 19:50:39 by hbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char		*take_stdin(int fd)
{
	int		nread;
	char	*buff;
	char	*std_in;

	buff = (char *)malloc(sizeof(char) * (BUFF + 1));
	std_in = (char *)malloc(sizeof(char));
	std_in[0] = 0;
	while ((nread = read(fd, buff, BUFF)) && (nread != -1))
	{
		buff[nread] = 0;
		std_in = ft_reallocat(std_in, buff);
		if (!std_in)
			return ("error");
	}
	if (buff)
		free(buff);
	if (nread == -1)
		return ("error");
	return (std_in);
}
