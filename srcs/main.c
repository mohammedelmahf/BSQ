/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 21:37:00 by maelmahf          #+#    #+#             */
/*   Updated: 2024/07/15 21:37:02 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void		process_args(t_grid *grid, t_solution *sol, int argc, char **argv)
{
	int			i;

	i = 1;
	while (i < argc)
	{
		if (ft_load_grid(argv[i], grid))
			ft_process_grid(grid, sol);
		else
			write(ERR, "map error\n", 10);
		i++;
		if (i != argc)
			write(OUT, "\n", 1);
		ft_free_grid(grid);
	}
}

int			main(int argc, char **argv)
{
	t_grid		grid;
	t_solution	solution;

	if (argc < 2)
	{
		if (ft_parse_grid(IN, &grid))
			ft_process_grid(&grid, &solution);
		else
			write(ERR, "map error\n", 10);
		ft_free_grid(&grid);
	}
	else
		process_args(&grid, &solution, argc, argv);
}
