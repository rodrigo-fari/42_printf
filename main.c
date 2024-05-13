#include "libftprintf.h"

int main(void)
{
	int	a = 21;
	int	b = 0;
	int	c = 0;
	b = ft_printf("ft_printf:%d\n", a);
	printf("%d\n", b);
	c = printf("printf:%d\n", a);
	printf("%d\n", c);
	return (0);
}