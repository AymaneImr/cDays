#include <unistd.h>

void ft_print_comb(void) {

  char a = '0';
  char b = '1';
  char c = '2';

  while (a <= '7') {
    char num[] = {a, b, c};

    write(1, num, 3);
    if (!(a == '7' && b == '8' && c == '9')) {
      write(1, ", ", 2);
    }
    c++;

    if (c > '9') {
      b++;
      c = b + 1;
    }

    if (b > '8') {
      a++;
      b = a + 1;
      c = b + 1;
    }
  }
}

int main() {

  ft_print_comb();
  return 1;
}
