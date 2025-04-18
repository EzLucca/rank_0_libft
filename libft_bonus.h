
#ifndef LIBFT_H
# define LIBFT_H

// Libraries

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <limits.h>
# include <stdint.h>
# include <ctype.h>

// Type definition
typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

// Bonus functions

int ft_lstsize(t_list *lst);
void    ft_lstadd_front(t_list **lst, t_list *new);
void    ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstdelone(t_list *lst, void (*del)(void *));
void    ft_lstclear(t_list **lst, void (*del)(void *));
void    ft_lstiter(t_list *lst, void (*f)(void *));
t_list  *ft_lstlast(t_list *lst);
t_list  *ft_lstnew(void *content);
t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
