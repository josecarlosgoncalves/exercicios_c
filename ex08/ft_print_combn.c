#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb_recursive(int n, int pos, char *comb, int start)
{
	// Caso base: se a posição atual for igual ao tamanho n, imprime a combinação
	if (pos == n)
	{
		write(1, comb, n);  // Imprime a combinação de n dígitos
		if (comb[0] != '9' - (n - 1))  // Verifica se não é a última combinação
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return;
	}

	// Percorre os números a partir do valor "start" para formar combinações
	for (int i = start; i <= 9; i++)
	{
		comb[pos] = i + '0';  // Adiciona o número convertido para caractere
		ft_print_comb_recursive(n, pos + 1, comb, i + 1);  // Chamada recursiva
	}
}

void	ft_print_combn(int n)
{
	char comb[10];  // Array para armazenar a combinação atual
	ft_print_comb_recursive(n, 0, comb, 0);
}

int	main(void)
{
	ft_print_combn(2);  // Exemplo: imprime todas as combinações de 2 dígitos
	ft_putchar('\n');
	ft_print_combn(3);  // Exemplo: imprime todas as combinações de 3 dígitos
	ft_putchar('\n');
	return (0);
}
