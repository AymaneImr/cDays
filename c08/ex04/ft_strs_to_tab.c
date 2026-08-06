#include "ft_stock_str.h"
#include <stdlib.h>

int ft_strlen(char *s) {
  int i;

  i = 0;
  while (s[i])
    i++;
  return (i);
}

char *ft_strdup(char *s) {
  int i;
  int size;
  char *p;

  size = ft_strlen(s);
  p = malloc((size + 1) * sizeof(char));
  if (!p)
    return (p);
  *(p + size) = '\0';
  i = 0;
  while (i < size) {
    *(p + i) = s[i];
    i++;
  }
  return (p);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av) {
  int i;
  t_stock_str *p;

  i = 0;
  p = malloc((ac + 1) * sizeof(t_stock_str));
  if (!p)
    return (NULL);
  while (i < ac) {
    p[i].size = ft_strlen(av[i]);
    p[i].str = av[i];
    p[i].copy = ft_strdup(av[i]);
    i++;
  }
  p[i].str = 0;
  return (p);
}
