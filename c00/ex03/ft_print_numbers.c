#include <unistd.h>

void ft_print_numbers(void) {

  char start = '0';
  for (; start <= '9'; start++) {
    write(1, &start, 1);
  }
}

int main() {
  ft_print_numbers();

  return 0;
}
