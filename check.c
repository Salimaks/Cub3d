/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skassimi <skassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:55:22 by skassimi          #+#    #+#             */
/*   Updated: 2025/08/06 20:32:35 by skassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int ft_error(char *str)
{
    printf("error\n%s", str);
    exit(0);
}

int check_cub(char *str)
{
    int i;

    i = ft_strlen(str);
    if (str[i - 1] != 'b' || str[i - 2] != 'u' || str[i - 3] != 'c' || str[i - 4] != '.')
        return (0);
    return (1);
}

// int check_map(t_map **map)
// {
//     int i;

// }

int check_args(char **argv, int argc)
{
    if (argc != 2)
        return (ft_error("***arguments not valid !***"));
    if (ft_strlen(argv[1]) < 5 || !check_cub(argv[1]))
        return (ft_error("***argument not valid! join a .cub file please!!***"));
    return (1);
}
