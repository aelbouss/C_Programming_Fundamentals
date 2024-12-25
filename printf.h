#ifndef PRINTF_H
#define PRINTF_H

//headers section
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
//prototypes  section 
size_t	ft_print_unsigned(unsigned int n);
size_t	ft_print_lower_hex(unsigned int n);
size_t	ft_putchar(char c);
size_t	_hex(unsigned long int n);
size_t	ft_print_address(void *address);
size_t	ft_print_upper_hex(unsigned int n);
size_t	ft_putnbr(int n);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *);
int	ft_printf(const char *format, ...);
size_t	flags_handling(va_list ap, int i, const char *format);
#endif
