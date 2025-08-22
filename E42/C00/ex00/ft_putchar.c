/* ************************************************************************** */
/*                                                                            */
/*   Author: Jose Carlos Goncalves                                            */
/*   Email:  josecarlosgoncalves@outlook.pt                                   */
/*   Date:   2025/08/21                                                       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

int main (void)
{
	ft_putchar('a');
	return (0);
}

void ft_putchar(char c)
{
	write (1, &c, 1);
	write (1, "\n", 1);
}
