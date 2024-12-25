#include "printf.h"
#include <limits.h>

int main(void)
{
	int c1 = printf(" %p ", 16);
	printf("\n");	
	int c2 = ft_printf(" %p ", 16);
	printf("\n%d\n%d\n",c1,c2);
	return 0;
}

