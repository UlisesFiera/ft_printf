#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return;
	del(lst->content);
	free(lst);
}

/*

->	"void(*del)(void*)"" is a function created outside of this function that frees memory, such as void freenode(void *content)
-> 	We take that function and apply it to the content of our node. The purpose of our function is to do that and free the
	node itself too, otherwise the outside function would suffice.

*/