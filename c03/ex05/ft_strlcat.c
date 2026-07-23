unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
  unsigned int i = 0;
  int src_len = 0;
  int dest_len = 0;

  while (*(dest + dest_len) != '\0') {
    dest_len++;
  }

  while (*(src + src_len) != '\0') {
    src_len++;
  }

  if (size > dest_len + 1) {

    while (i < size - dest_len - 1 && *(src + i) != '\0') {
      *(dest + i + dest_len) = *(src + i);
      i++;
    }

    *(dest + i + dest_len) = '\0';
  }
  return src_len + dest_len;
}
