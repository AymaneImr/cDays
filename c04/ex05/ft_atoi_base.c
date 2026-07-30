#include <stdio.h>
int contain_sign(char *base) {
  int i;

  i = 0;
  while (base[i] != '\0') {
    if (base[i] == '+' || base[i] == '-')
      return 1;
    i++;
  }
  return 0;
}

int contain_dup(char *base) {
  int i;
  int j;

  i = 0;
  while (base[i] != '\0') {
    j = 1;
    while (base[i + j] != '\0') {
      if (base[i] == base[i + j])
        return 1;
      j++;
    }
    i++;
  }
  return 0;
}

int str_len(char *base) {
  int len;

  len = 0;
  while (base[len] != '\0')
    len++;
  return len;
}

int ft_atoi_base(char *str, char *base) {
  int i = 0;
  int sign = 1;
  int result = 0;

  if (str_len(base) <= 1)
    return 0;
  if (contain_sign(base))
    return 0;
  if (contain_dup(base))
    return 0;

  while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    i++;
  while (str[i] == '-' || str[i] == '+') {
    if (str[i] == '-')
      sign = -sign;
    i++;
  }

  while (str[i] >= '0' && str[i] <= '9') {
    result = result * str_len(base);
    // result = result * 10 + (str[i] - '0');
    i++;
  }
  return result * sign;
}

int main(void) {
  int i = contain_dup("helol");
  printf("%d", i);
  return 0;
}
