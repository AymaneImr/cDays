
#include <stdlib.h>

int ft_strlen(char *str) {
  int len;

  len = 0;
  while (str[len])
    len++;
  return len;
}

void ft_strcat(char *dest, char *src) {
  int i;

  i = 0;
  while (src[i]) {
    dest[ft_strlen(dest) + i] = src[i];
    i++;
  }
  dest[ft_strlen(dest) + i] = '\0';
}

char *ft_strjoin(int size, char **strs, char *sep) {
  char *dest;
  int i;
  int len;

  len = 0;
  i = 0;
  while (i < size) {
    len += ft_strlen(strs[i]);
    i++;
  }
  i = 0;
  while (i < size - 1) {
    len += ft_strlen(sep);
    i++;
  }

  dest = malloc(sizeof(char) * (len + 1));
  if (!dest) {
    return NULL;
  }
  dest[0] = '\0';
  if (size == 0)
    return dest;
  i = 0;
  while (size > i) {
    ft_strcat(dest, strs[i]);
    if (i < size - 1)
      ft_strcat(dest, sep);
    i++;
  }
  return dest;
}
