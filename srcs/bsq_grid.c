/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_grid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 21:36:28 by maelmahf          #+#    #+#             */
/*   Updated: 2024/07/15 21:36:32 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "utilities.h"

t_bool	ft_load_grid(char *path, t_grid *grid)
{
	int		fd;
	t_bool	result;

	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (false);
	result = ft_parse_grid(fd, grid);
	close(fd);
	return (result);
}

void	ft_free_grid(t_grid *grid)
{
	free(grid->map);
	free(grid->source);
}

void	ft_process_grid(t_grid *grid, t_solution *sol)
{
	UINT x;
	UINT y;

	if (find_solution(sol, grid))
	{
		x = sol->x;
		while (x < sol->x + sol->size)
		{
			y = sol->y;
			while (y < sol->y + sol->size)
			{
				grid->map[y][x] = grid->translate[fill];
				y++;
			}
			x++;
		}
		y = 0;
		while (y < grid->h)
		{
			write(OUT, grid->map[y], grid->w);
			write(OUT, "\n", 1);
			y++;
		}
	}
}
