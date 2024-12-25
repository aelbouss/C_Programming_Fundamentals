#include "printf.h"

size_t	ft_putstr(char *str)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	if (!str)
		return(ft_putstr("(null)"));
	while (str[i])
	{
		write(1, &str[i], 1);
		cnt++;
		i++;
	}
	return (cnt);
}
