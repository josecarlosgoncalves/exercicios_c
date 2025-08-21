/* ************************************************************************** */
/*                                                                            */
/*   Author: Jose Carlos Goncalves                                            */
/*   Email:  josecarlosgoncalves@outlook.pt                                   */
/*   Date:   2025/08/21                                                       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void);

int main(void)
{
	ft_print_numbers();
	return (0);
}

void ft_print_numbers(void)
{
	char n ='0';
	while ( n <= '9')
	{
		write(1, &n, 1);
		write(1, " ",1);
		n++;
		
	}
	 write (1,"\n", 1);	
}
