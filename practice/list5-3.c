#include <stdio.h>

int main(void)
{
  int i;
  int vc[5];

  for (i = 0; i < 5; i++)
  {
    vc[i] = i + 1;
    printf("vc[%d]=%d\n", i, vc[i]);
  }

  return (0);
}
