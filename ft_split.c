#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

static int	ft_num_of_words(char const *s, char c)
{
	int	count;
	int	i;
	int	in_word;

	count = 0;
	i = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static char	*ft_put_word_in_tab(char const *s, int start, int end)
{
	char	*tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(char) * (end - start + 1));
	if (!tab)
		return (NULL);
	while (start < end)
	{
		tab[i] = s[start];
		start++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		num_of_words;
	int		current_num_of_words;
	int		i;
	int		j;

	num_of_words = ft_num_of_words(s, c);
	current_num_of_words = 0;
	tab = malloc(sizeof(char *) * (num_of_words + 1));
	i = 0;
	if (!tab || !s)
		return (NULL);
	while (current_num_of_words < num_of_words)
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[j] != c && s[j])
			j++;
		tab[current_num_of_words] = ft_put_word_in_tab(s, i, j);
		//tab[current_num_of_words] = ft_substr(s, i, (j - i));
		i = j;
		current_num_of_words++;
	}
	tab[current_num_of_words] = NULL;
	return (tab);
}

/*int main()
{
	char **tab;
	char *line = "hello how are you my friend 32425";
	int i = 0;

	tab = ft_split(line, ' ');
	while (tab[i])
	{
		int j = 0;
		while (tab[i][j])
		{
			write(1, &tab[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}*/
