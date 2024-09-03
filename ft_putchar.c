// author: José Carlos Gonçalves
// Date: 02/09/2024

#include <unistd.h>

void ft_putchar(char c);

int main (void)
{
	ft_putchar('c');
	return (0);
}

void ft_putchar(char c)
{
	write (1, &c, 1)
	write (1 '\n', 1);
}
