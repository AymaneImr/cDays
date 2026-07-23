char *ft_strncat(char *dest, char *src, unsigned int nb) {
  unsigned int i = 0;
  int len = 0;

  while (*(dest + len) != '\0') {
    len++;
  }

  while (i < nb && *(src + i) != '\0') {
    *(dest + (len + i)) = *(src + i);
    i++;
  }

  *(dest + (len + i)) = '\0';
  return dest;
}
