#include "libft.h"

int	ft_lstsize(t_list *lst)
{
    int count;
	
	if (!lst)
		return (0);
	count = 0;
    while (lst)
    {
        count++;
        lst = lst->next;
    }
    return (count);
}

/* 

-> We loop until "lst" points to NULL, and move the pointer of "*lst" to the next node each time.

*/