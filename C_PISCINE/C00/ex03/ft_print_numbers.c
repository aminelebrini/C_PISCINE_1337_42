#include <unistd.h>

void ft_print_numbers(void)
{
    char j;

    j = '0';
    while (i <= '9')
    {
        write(1, &i, 1);
    }
    i++;
    
}
