/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 21:30:18 by maelmahf          #+#    #+#             */
/*   Updated: 2024/07/15 21:30:23 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef UTILITIES_H
# define UTILITIES_H

# include <stdlib.h>
# include "ft_bool.h"

# define UINT unsigned int
# define ULNG unsigned long
# define UCHR unsigned char

# define IN 0
# define OUT 1
# define ERR 2

t_bool	ft_atoi_n_strict(char *str, UINT n, UINT *result);

char	*ft_extend_array(char *orig, char *n_cont, UINT old_len, UINT len);

#endif
