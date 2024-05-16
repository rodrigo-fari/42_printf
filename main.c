#include "libftprintf.h"

int main(void)
{
	int	a = 21234;
	int	b = 0;
	int	c = 0;
	b = ft_printf("ft_printf:%x\n", a);
	printf("%d\n", b);
	c = printf("printf:%x\n", a);
	printf("%d\n", c);
	b = ft_printf("ft_printf:%X\n", a);
	printf("%d\n", b);
	c = printf("printf:%X\n", a);
	printf("%d\n", c);
	return (0);
}