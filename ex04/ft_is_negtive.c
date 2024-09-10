// author: José Carlos Gonçalves
// Date: 09/09/2024

#include <unistd.h>

void ft_is_negative(int n);

int main (void)
{
    int number = -2;
    ft_is_negative(number);
    return (0);
}
void ft_is_negative( int n)
{
    if (n >= 0)
    {
        write (1, "P", 1);
        write (1, "\n", 1);
    }
    else
    {
        write(1, "N", 1);
        write (1, "\n", 1);
    }
}
