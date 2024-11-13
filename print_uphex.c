#include "libftprintf.h"

int	print_uphex(long arg, int base)
{
	int		count;
	char	*symbol;

	symbol = "0123456789ABCDEF";
	base = 16;
	if (arg < 16)
		return (print_char(symbol[arg]));
	else
	{
		count = print_uphex(arg / base, base);
		return (count + print_uphex(arg % base, base));
	}
}
