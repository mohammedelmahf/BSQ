/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_parse2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 21:36:52 by maelmahf          #+#    #+#             */
/*   Updated: 2024/07/15 21:36:53 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "utilities.h"

t_bool	ft_read_full(int fd, char **file_content, UINT *total)
{
	char		buffer[SIZE_3M];
	UINT		byte_read;

	if (read(fd, 0, 0) == -1)
		return (false);
	*total = 0;
	*file_content = NULL;
	while ((byte_read = read(fd, buffer, SIZE_3M)) > 0)
	{
		if (!(*file_content = ft_extend_array(*file_content,
				buffer, *total, *total + byte_read)))
			return (false);
		(*total) += byte_read;
	}
	if (byte_read == 0)
		return (true);
	return (false);
}
