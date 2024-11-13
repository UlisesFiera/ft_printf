#include "libftprintf.h"

int	print_char(int arg)
{
	return (write(1, &arg, 1));
}
