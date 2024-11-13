#include "libftprintf.h"

int	convert_ptr(uintptr_t address)
{
	int		count;
	char	*symbol;

	count = 0;
	symbol = "0123456789abcdef";

	if (address < 16)
		return (print_char(symbol[address]));
	else
	{
		count += convert_ptr(address / 16);
		return (count + print_char(symbol[address % 16]));
	}
}

int	print_ptr(void *arg)
{
	uintptr_t	adress;
	int			count;

	count = 0;
	adress = (uintptr_t)arg;
	count = write(1, "0x", 2);
	count += convert_ptr(adress);
	return (count);
}
