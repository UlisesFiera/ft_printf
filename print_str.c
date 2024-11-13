#include "libftprintf.h"

int	print_str(char *arg)
{
	int	count;

	count = 0;
	if (!arg)
		return (write(1, "(null)", 6));
	while (*arg)
	{
		count += write(1, arg, 1);
		arg++;
	}
	return (count);
}
