// Author José carlos Gonçalves
// Date 10/09/2024

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	// Loop através dos dígitos de 0 a 9
	for (a = '0'; a <= '7'; a++)      // Primeiro dígito vai de '0' a '7'
	{
		for (b = a + 1; b <= '8'; b++)  // Segundo dígito sempre maior que o primeiro
		{
			for (c = b + 1; c <= '9'; c++)  // Terceiro dígito sempre maior que o segundo
			{
				// Imprime os três números
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				
				// Adiciona a vírgula e o espaço se não for a última combinação
				if (a != '7' || b != '8' || c != '9') // Evita a vírgula depois de '789'
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
