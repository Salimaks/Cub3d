/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skassimi <skassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:55:27 by skassimi          #+#    #+#             */
/*   Updated: 2025/08/06 20:32:23 by skassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int main(int argc, char **argv)
{
	t_map	**map;

	map = NULL;
	check_args(argv, argc);
	printf("args checkes\n");
	parser(argc, argv, map);
	return (0);
}