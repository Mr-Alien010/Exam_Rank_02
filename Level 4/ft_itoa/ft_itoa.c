#include <stdlib.h>

char *ft_itoa(int nbr) 
{
    int i = 0;
    int tmp = nbr;

    if(nbr <= 0)
        i++;
    while(tmp)
    {
        tmp /= 10;
        i++;
    }

    char *str = (char *)malloc(sizeof(char) * i + 1);
    str[i] = '\0';

    if(str == NULL)
        return NULL;
    if(nbr == -2147483648)
        return ("-2147483648");
    if(nbr < 0)
    {
        nbr *= -1;
        str[0] = '-';
    }
    if (nbr == 0)
    {
        str[0] = '0';
        return str;
    }
    while(nbr)
    {
        str[--i] = nbr % 10 + 48;
        nbr /= 10;
    }
    return str;
}

/*
#include <stdio.h>
int main()
{
    // char *p;

    // p = ft_itoa(235);
    // printf("%s", p);
    // free(p);

    printf("%s\n", ft_itoa(-234));
    printf("%s\n", ft_itoa(0));
    printf("%s\n", ft_itoa(234));
    printf("%s\n", ft_itoa(-2147483648));
    return 0;
}
*/