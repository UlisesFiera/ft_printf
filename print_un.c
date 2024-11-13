#include "libftprintf.h"

int	print_un(unsigned long arg, int base)
{
	int		count;
	char	*symbol;

	symbol = "0123456789";
	base = 10;
	if (arg < 10)
		return (print_char(symbol[arg]));
	else
	{
		count = print_un(arg / base, base);
		return (count + print_un(arg % base, base));
	}
}
