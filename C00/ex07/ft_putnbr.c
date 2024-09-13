#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	// Caso especial para o menor número de um int
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	
	// Se o número for negativo, imprime o sinal de menos e transforma o número em positivo
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	
	// Recursão para imprimir os dígitos
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);  // Chama a função novamente com o número sem o último dígito
	}
	ft_putchar((nb % 10) + '0');  // Imprime o último dígito
}

int	main(void)
{
	ft_putnbr(42);         // Exemplo 1: imprime 42
	ft_putchar('\n');
	ft_putnbr(-2147483648); // Exemplo 2: imprime -2147483648
	ft_putchar('\n');
	ft_putnbr(0);          // Exemplo 3: imprime 0
	ft_putchar('\n');
	ft_putnbr(-12345);      // Exemplo 4: imprime -12345
	ft_putchar('\n');
	return (0);
}
