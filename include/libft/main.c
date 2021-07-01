#include "./includes/libft.h"

# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <fcntl.h>
# include <stdarg.h>
# include <wchar.h>
# include <stdio.h>

int main(int ac, char **av)
{
   (void)ac;
   int fd = open(av[1], O_RDONLY, 0);
   char *line;

   while (get_next_line(fd, &line))
   {
        printf("%s\n", line);
        free(line);
   }
   return 0;
}


