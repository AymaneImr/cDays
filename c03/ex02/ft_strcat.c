char *ft_strcat(char *dest, char *src) {
  int i = 0;
  int len = 0;

  while (*(dest + len) != '\0') {
    len++;
  }

  i = 0;
  while (*(src + i) != '\0') {
    *(dest + (len + i)) = *(src + i);
    i++;
  }

  *(dest + (len + i)) = '\0';
  return dest;
}
