#include <stdio.h>
void ft_sort_int_tab(int *tab, int size) {
  int l;
  int r;
  int temp;
  int b;

  l = 0;
  r = 1;
  b = 0;

  while (b < size - 1) {

    while (l < size - 1) {
      temp = 0;
      if (tab[l] > tab[r]) {
        temp = tab[l];
        tab[l] = tab[r];
        tab[r] = temp;
      }
      l++;
      r++;
    }
    b++;
    l = 0;
    r = 1;
  }
}
