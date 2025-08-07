/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skassimi <skassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:17:13 by skassimi          #+#    #+#             */
/*   Updated: 2025/08/06 20:40:19 by skassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int count_lines(char **av)
{
    int nb;
    char *line;
    int fd;

    nb = 0;
    fd = open(av[1], O_RDONLY);
    line = get_next_line(fd);
    while (line)
    {
        nb++;
        line = get_next_line(fd);
    }
    printf("nb of lines :%d\n", nb);
    return (nb);
}
char **get_file_in_tab(char **av)
{
    char **tab;
    int fd;
    int nb_lines;
    int i;

    fd = open(av[1], O_RDONLY);
    if(fd < 0)
        return(NULL);
    printf("file opened\n");
    nb_lines = count_lines(av);
    tab = (char **)malloc(sizeof(char *) * (nb_lines + 1));
    printf("allocated\n");
    if(!tab)
        return(NULL);
    i = 0;
    while(i <= nb_lines)
    {
        tab[i] = get_next_line(fd);
        printf("%s", tab[i]);
        i++;
    }
    tab[i] = NULL;
    return(tab);
}

// void init_map(char **av, t_map **map)
// {
//     map.file_content = get_file_in_tab(av[1]);
    
// }
int parser(int ac, char **av, t_map **map)
{
    char **file_content;

    map = NULL;
    printf("parsing\n");
    if(check_args(av, ac))
    {
        file_content = get_file_in_tab(av);
    }
    return(1);
}
