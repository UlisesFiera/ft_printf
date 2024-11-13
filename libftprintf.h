#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(char const *, ...);
int	print_char(int arg);
int	print_digit(long arg, int base);
int	print_ptr(void *arg);
int print_str(char *arg);
int	print_un(unsigned long arg, int base);
int	print_uphex(long arg, int base);

#endif