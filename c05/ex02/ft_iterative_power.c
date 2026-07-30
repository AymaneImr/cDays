int ft_iterative_power(int nb, int power) {
  int i;
  int result;

  result = 1;
  i = 0;
  if (power < 0)
    return 0;
  if (power == 0)
    return 1;
  while (i < power) {
    result = result * nb;
    i++;
  }
  return result;
}
