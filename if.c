#include "ft_printf.h"

int	ft_if(va_list *argp, const char c)
{
	int	i;

	i = 0;
	if (c == 'c')
		return (ft_putchar(va_arg(*argp, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(*argp, char *)));
	else if (c == 'p')
		return (ft_putstr("0x") + ft_x_putnbr(va_arg(*argp, void *), i));
	else if (c == 'd')
		return (ft_putnbr(va_arg(*argp, int)));
	else if (c == 'i')
		return (ft_putnbr(va_arg(*argp, int)));
	else if (c == 'u')
		return (ft_y_putnbr(va_arg(*argp, int)));
	else if (c == 'x')
		return (ft_putnbr_base(va_arg(*argp, int), 1));
	else if (c == 'X')
		return (ft_putnbr_base(va_arg(*argp, int), 2));
	else
		return (ft_putchar(c));
}
