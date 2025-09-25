#include <stdio.h>

void print_alphabet_x10(void);
void	_putchar(char c);

void print_alphabet_x10(void)
{
	char	alpha;
	short	i;

	i = 0;
	while(i < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}

int	main(void)
{
	print_alphabet_x10();
	return (0);
}
