#include <unistd.h>

void ft_print_comb2(void) {
  int a;
  int b;
  char c;
  char s = ' ';
  char m = ',';

  a = 0;
  while (a <= 98) {
    b = a + 1;
    while (b <= 99) {
      c = (a / 10) + '0';
      write(1, &c, 1);
      c = (a % 10) + '0';
      write(1, &c, 1);
      write(1, &s, 1);
      c = (b / 10) + '0';
      write(1, &c, 1);
      c = (b % 10) + '0';
      write(1, &c, 1);
      if (!(a == 98 && b == 99)) {
        write(1, &m, 1);
      }
      b++;
    }
    a++;
  }
}
