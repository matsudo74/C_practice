#include <stdio.h>

int main(void)
{
  int i;
  int height_1, height_2, delta;

  printf("何cmから：");
  scanf("%d", &height_1);
  printf("何cmまで：");
  scanf("%d", &height_2);
  printf("何cmごと：");
  scanf("%d", &delta);

  for (i = height_1; i <= height_2; i++ delta)
  {
    printf("%4dcm　%5.2fkg\n", i, ((double)i - 100) * 0.9);
  }

  return (0);
}
