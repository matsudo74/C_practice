#include <stdio.h>

int main(void)
{
  int i;
  double vc[5];

  for (i = 0; i < 5; i++)
  {
    vc[i] = 0.0;
    printf("vc[%d]=%.1f\n", i, vc[i]);
  }

  return (0);
}
