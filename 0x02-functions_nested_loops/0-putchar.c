#include <unistd.h>

/*
 * a program that prints exactly "_putchar" followed by newline	
 */

int	main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
