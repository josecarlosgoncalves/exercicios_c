#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int n)
{
	ft_putchar((n / 10) + '0'); // imprime o dígito da dezena
	ft_putchar((n % 10) + '0'); // imprime o dígito da unidade
}

void	ft_print_comb2(void)
{
	int n1;
	int n2;

	// Loop para o primeiro número (n1)
	for (n1 = 0; n1 <= 98; n1++)
	{
		// Loop para o segundo número (n2), sempre maior que n1
		for (n2 = n1 + 1; n2 <= 99; n2++)
		{
			// Imprime os dois números no formato correto
			ft_print_number(n1);
			ft_putchar(' ');
			ft_print_number(n2);

			// Não imprime vírgula e espaço após a última combinação
			if (n1 != 98 || n2 != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
