#include "cub3d.h"

static char *ft_strdup(char *str)
{
    int i;
    char *tab;

    i = 0;
    while(str[i] != '\0')
        i++;
    tab = malloc(sizeof(char) * (i + 1));
    if (tab == NULL)
        return (NULL);
    i = 0;
    while(str[i] != '\0')
    {
        tab[i] = str[i];
        i++;
    }
    tab[i] = '\0';
    return (tab);
}

char *get_next_line(int fd)
{
    static char buffer[BUFFER_SIZE];
    static int buffer_read;
    static int buffer_pos;
    char line[70000];
    int i = 0;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    while (1)
    {
        if(buffer_pos >= buffer_read)
        {
            buffer_read = read(fd, buffer, BUFFER_SIZE);
            buffer_pos = 0;
            if (buffer_read <= 0)
                break;
        }
        line[i++] = buffer[buffer_pos++];
        if (line[i - 1] == '\n')
            break;
    }
    line [i] = '\0';
    if (i == 0)
        return (NULL);
    return (ft_strdup(line));
}
int main()
{
    char *line;
    char **tab;

    
    int fd = open("./txt.txt", O_RDONLY);
    line = get_next_line(fd);
    while (line != NULL)
    {
        printf ("%s\n", line);
        line = get_next_line(fd);
    }
    return (0);
}