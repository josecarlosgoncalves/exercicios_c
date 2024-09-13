// Author: José Carlos Gonçalves
// Date 13/092024

# include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
    int n;
    ft_ft(&n);
    printf("%d\n", n);
}

void ft_ft(int *nbr)
{
    *nbr = 42;
}
