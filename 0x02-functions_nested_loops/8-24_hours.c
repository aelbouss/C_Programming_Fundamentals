#include <unistd.h>

void	_putchar(char c);
void	jack_bauer(void);


void jack_bauer(void)
{
	char	h;
	char	m;

	h = 0;
	while (h <= 23)
	{
		m = 0;
		while (m <= 59)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;

		}
		h++;
	}
}

