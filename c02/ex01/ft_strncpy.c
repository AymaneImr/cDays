char *ft_strncpy(char *dest, char *src, unsigned int n) {
  unsigned int i;

  i = 0;
  while (i < n) {
    if (src[i] == '\0')
      dest[i] = '\0';
    else
      dest[i] = src[i];
    i++;
  }

  return dest;
}
