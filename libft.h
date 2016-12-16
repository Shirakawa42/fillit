/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:13:55 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/16 12:33:28 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <string.h>

size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *s);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
size_t				ft_strlcat(char *dest, const char *src, size_t len);
char				*ft_strstr(const char *meule, const char *aiguille);
char				*ft_strnstr(const char *meule,
		const char *aiguille, size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_striter(char *s, void (*f) (char *));
void				ft_striteri(char *s, void (*f) (unsigned int, char *));
int					ft_strequ(const char *s1, const char *s2);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
char				*ft_strsub(const char *s, unsigned int start, size_t len);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strtrim(const char *s);
char				**ft_strsplit(const char *s, char c);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(const char *s);
void				ft_putendl(const char *s);
void				ft_putnbr(int n);

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

#endif
