#include "libft.h"

t_list    *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list    *new_list;
    t_list    *save;

    if (!lst || !f)
        return (NULL);
    new_list = NULL;
    while (lst && f)
    {
        save = ft_lstnew(f(lst->content));
        if (!save)
        {
            ft_lstclear(&save, del);
            return (0);
        }
        ft_lstadd_back(&new_list, save);
        lst = lst->next;
    }
    return (new_list);
}