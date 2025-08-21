/* ************************************************************************** */
/*                                                                            */
/*   Author: Jose Carlos Goncalves                                            */
/*   Email:  josecarlosgoncalves@outlook.pt                                   */
/*   Date:   2025/08/21                                                       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_print_reverse_alphabet(void);

int main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}

void ft_print_reverse_alphabet(void)
{
	char w ='z';
	while ( w >= 'a')
	{
		write(1, &w, 1);
		write(1, " ",1);
		w--;
		
	}
	 write (1,"\n", 1);	
}
