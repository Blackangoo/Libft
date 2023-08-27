#ifndef LIBFT_H
    #define LIBFT_H

    #include <string.h>

    typedef struct s_list
    {
        struct s_list *next;
	    void *data;
    } t_list;

    int ft_isalpha(int c);
    int ft_isdigit(int c);
    int ft_isalnum(int c);
    int ft_isascii(int c);
    int ft_isprint(int c);
    int ft_strlen(char *str);
    void *ft_memset(void *s, int c, size_t n);
    void ft_bzero(void *s, size_t n);
    void *ft_memcpy(void *dest, const void *src, size_t n);

#endif