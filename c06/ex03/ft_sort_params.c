#include <unistd.h>

int ft_strcmp(char *s1, char *s2) {
  int i;

  i = 0;
  while (s1[i] && s2[i]) {
    if (!(s1[i] == s2[i])) {
      return s1[i] - s2[i];
    }
    i++;
  }
  return (s1[i] - s2[i]);
}

void ft_sort(int argc, char *argv[]) {
  int i;
  char *temp;

  i = 1;
  while (argc - 1 > i) {

    if (ft_strcmp(argv[i], argv[i + 1]) > 0) {
      temp = argv[i];
      argv[i] = argv[i + 1];
      argv[i + 1] = temp;
      i = 0;
    }
    i++;
  }
}

void ft_pustr(char *str) {
  int i;

  i = 0;
  while (str[i]) {
    write(1, &str[i], 1);
    i++;
  }
}

int main(int argc, char *argv[]) {
  int i;

  i = 1;
  ft_sort(argc, argv);
  while (argc > i) {
    ft_pustr(argv[i]);
    write(1, "\n", 1);
    i++;
  }
  return 0;
}
