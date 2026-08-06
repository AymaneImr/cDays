#include <stdlib.h>
int ft_ultimate_range(int **range, int min, int max) {
  int i;
  int j;

  if (min >= max) {
    *range = NULL;
    return 0;
  }
  *range = malloc(sizeof(int) * (max - min));
  if (!*range)
    return -1;
  i = 0;
  j = min;
  while (i < max - j) {
    *(*range + i) = min;
    i++;
    min++;
  }
  return i;
}
