int ft_iterative_factorial(int nb) {
  int i = nb;

  if (nb == 0) {
    return 1;
  }
  if (nb < 0) {
    return 0;
  }
  while (i != 1) {
    nb = nb * (i - 1);
    i--;
  }

  return nb;
}
