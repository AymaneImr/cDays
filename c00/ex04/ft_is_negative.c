#include <unistd.h>

void ft_is_negative(int n) {

  char neg = 'N';
  if (n < 0) {
    write(1, &neg, 1);
  } else {

    char pos = 'P';
    write(1, &pos, 1);
  }
}

int main() {

  ft_is_negative(5);
  return 1;
}
