#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    if(ac == 2)
    {
        while(av[1][i] == ' ')
            i++;
        while(av[1][i])
        {
            if(!(av[1][i] != ' ' && av[1][i]))
                i++;
            write(1, &av[1][i++], 1);
            if(av[1][i] == ' ')
                write(1, "   ", 3);
            while(av[1][i] == ' ')
                i++;
        }
    }
    write(1, "\n", 1);
}