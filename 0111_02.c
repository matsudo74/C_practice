#include <stdio.h>

int combinatorial(int n, int r)
{
  if (n == r)
  {
    return 1;
  }
  else if (r == 0)
  {
    return 1;
  }
  else if (r == 1)
  {
    return (n);
  }
  else
    return (combinatorial(n - 1, r - 1) + combinatorial(n - 1, r));
}

int main(int ac, char *av[])
{
  int n, r, c;
  printf("input n & r:");
  scanf("%d %d", &n, &r);
  c = combinatorial(n, r);
  printf("c(%d,%d) = %d\n", n, r, c);
  return 0;
}
