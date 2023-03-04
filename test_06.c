#include <stdio.h>

int T(int x, int y, int z);

int T(int x, int y, int z)
{
  if (x <= y)
  {
    return y;
  }
  else
  {
    return T(T(x - 1, y, z), T(y - 1, z, x), T(z - 1, x, y));
  }
}

int main(void)
{
  printf("%d\n", T(100, 50, 0));
  return 0;
}
