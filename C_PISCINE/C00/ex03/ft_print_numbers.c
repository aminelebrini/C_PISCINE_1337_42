#include <unistd.h>

void ft_print_numbers(void)
{
    char j;

    j = '0';
    while (j <= '9')
    {
        write(1, &j, 1);
    }
    j++;
    
}
