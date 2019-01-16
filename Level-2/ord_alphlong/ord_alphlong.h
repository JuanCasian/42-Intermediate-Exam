#ifndef ORD_ALPHLONG

# define ORD_ALPHLONG

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	**ft_strsplit(char *str);
int		ft_wordcount(char *str);
char	*ft_strndup(char *str, int n);
int		ft_strlen(char *str);
char	*ft_strnew(int n);

char	***groupbylen(char **words);
char	***orderbyalpha(char ***groups);
void	print_results(char	***results);
#endif


