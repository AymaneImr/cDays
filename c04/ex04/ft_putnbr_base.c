#include <stdio.h>
#include <unistd.h>

int str_len(char *str) {
  int len;

  len = 0;
  while (*str) {
    len++;
    str++;
  }
  return len;
}

int contain_sign(char *str) {
  int i;

  i = 0;
  while (str[i] != '\0') {
    if (str[i] == '+' || str[i] == '-')
      return 0;
    i++;
  }
  return 1;
}

int contain_dup(char *str) {
  int i;
  int j;

  i = 0;
  while (str[i] != '\0') {
    j = 1;
    while (str[i + j] != '\0') {
      if (str[i] == str[i + j]) {
        return 0;
      }
      j++;
    }
    i++;
  }
  return 1;
}

void ft_putnbr_base(int nbr, char *base) {
  long n;
  char c;

  if (str_len(base) <= 1) {
    return;
  }
  if (contain_sign(base) == 0) {
    return;
  }
  if (contain_dup(base) == 0) {
    return;
  }
  n = nbr;
  if (n < 0) {
    write(1, "-", 1);
    n = -n;
  }

  if (n >= str_len(base)) {
    ft_putnbr_base(n / str_len(base), base);
  }

  c = base[n % str_len(base)];
  // c = n % str_len(base) + '0';
  write(1, &c, 1);
}

int main(void) {
  ft_putnbr_base(42, "0123456789");
  write(1, "\n", 1);

  ft_putnbr_base(42, "01");
  write(1, "\n", 1);

  ft_putnbr_base(255, "0123456789ABCDEF");
  write(1, "\n", 1);

  ft_putnbr_base(-42, "0123456789");
  write(1, "\n", 1);

  ft_putnbr_base(10, "poneyvif");
  write(1, "\n", 1);
  return 0;
}
