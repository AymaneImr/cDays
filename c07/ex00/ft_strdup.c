#include <stdlib.h>

char *ft_strdup(char *src) {
  char *str;
  int i;
  int len;

  len = 0;
  while (src[len] != '\0') {
    len++;
  }
  str = malloc(sizeof(char) * (len + 1));
  if (!str) {
    return NULL;
  }

  i = 0;
  while (src[i] != '\0') {
    str[i] = src[i];
    i++;
  }
  str[i] = '\0';
  return str;
}
