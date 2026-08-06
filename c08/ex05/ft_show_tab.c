#include "ft_stock_str.h"
#include <unistd.h>

void ft_putchar(char r) { write(1, &r, 1); }

void ft_putstr(char *r) {
  int i;

  i = 0;
  while (r[i])
    ft_putchar(r[i++]);
}

void ft_putnbr(int n) {
  if (n == -2147483648) {
    write(1, "-2147483648", 11);
    return;
  }
  if (n < 0) {
    ft_putchar('-');
    n = (-n);
  }
  if (n > 9)
    ft_putnbr(n / 10);
  ft_putchar(n % 10 + '0');
  return;
}

void ft_show_tab(struct s_stock_str *par) {
  int i;

  i = 0;
  while (par[i].str != NULL) {
    ft_putstr(par[i].str);
    ft_putchar('\n');
    ft_putnbr(par[i].size);
    ft_putchar('\n');
    ft_putstr(par[i].copy);
    ft_putchar('\n');
    i++;
  }
}
