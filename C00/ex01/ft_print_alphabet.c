/* ************************************************************************** */
/*                                                                            */
/*   Author: Jose Carlos Goncalves                                            */
/*   Email:  josecarlosgoncalves@outlook.pt                                   */
/*   Date:   2025/08/21                                                       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_print_alphabet(void);

int main(void)
{
	ft_print_alphabet();
	return (0);
}

void ft_print_alphabet(void)
{
	char w ='a';
	while ( w <= 'z')
	{
		printf("%c ", w);
		w++;
		
	}
	printf("\n");
}
