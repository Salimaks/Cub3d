/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skassimi <skassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:43:50 by skassimi          #+#    #+#             */
/*   Updated: 2025/08/05 19:09:44 by skassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

#include "libft/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42

#endif

typedef struct s_map
{
    char **map;
    int width;
    int height;

    char *north_texture;
    char *sud_texture;
    char *est_texture;
    char *west_texture;

    int floor_colour[3];
    int ceiling_colour[3];

    int player_x;
    int player_y;
    char direction;

}t_map;

int check_args(char **argv, int argc);
int main(int argc, char **argv);

#endif