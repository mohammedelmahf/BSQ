/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 21:30:09 by maelmahf          #+#    #+#             */
/*   Updated: 2024/07/15 21:30:11 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLUTION_H
# define SOLUTION_H

static void		actualize_sol(t_solution *sol, t_solution *intent,
					const t_grid *grid);
static t_bool	fits(const t_solution *sol, const t_grid *grid);
static t_bool	fits_succ(const t_solution *intent, const t_grid *grid);
static t_bool	dont_fit_basic(const t_solution *intent, const t_grid *grid);

#endif
