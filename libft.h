/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:48:19 by jbarratt          #+#    #+#             */
/*   Updated: 2025/01/30 10:24:42 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>
# include <limits.h>
# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}		t_list;

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memset(void *s, int c, size_t n);
size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcat(char *dst, char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strchr(const char *s, int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
int		ft_atoi(const char *nptr);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(const char *s1, const char *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
# define MAX_OPEN_FILES 1024
# define MALLOC_ERROR -2
# define READ_ERROR -1
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_node	t_node;
typedef struct s_node
{
	char	buf[BUFFER_SIZE];
	size_t	size;
	t_node	*next;
}			t_node;
char	*get_next_line(int fd);
ssize_t	seek_nl(t_node *n);
ssize_t	file_to_node(t_node **n, int fd);
ssize_t	add_node(t_node **n, int fd);
void	shift_left(t_node *n, size_t width);
ssize_t	create_list(t_node **head, int fd);
t_node	*consume_list(t_node *head, char *str);
void	free_node(t_node **n);

size_t	ft_strlen(const char *s);
int		ft_dprintf_char(int fd, char c);
int		ft_dprintf_str(int fd, char *s);
int		ft_dprintf_base(int fd, unsigned long n, size_t len, char *base);
int		ft_dprintf_unsigned_int(int fd, unsigned long n);
int		ft_dprintf_int(int fd, int n);
int		ft_dprintf_hex(int fd, unsigned long n, int is_upper);
int		ft_dprintf_ptr(int fd, void *p);
int		ft_dprintf_padded_int(int fd, int n, size_t width, char pad);
int		ft_dprintf_double(int fd, double x, size_t prec);
int		ft_dprintf_arg(int fd, va_list args, char **c);
int		ft_vdprintf(int fd, const char *format, va_list args);
int		ft_printf(const char *format, ...);

#endif
