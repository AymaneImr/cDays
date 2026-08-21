#include <unistd.h>
void ft_print_reverse_alphabet(void) {
  char alphabets = 'z';

  for (; alphabets >= 'a'; alphabets--) {
    write(1, &alphabets, 1);
  };
}

int main() {
  ft_print_reverse_alphabet();
  return 0;
}
