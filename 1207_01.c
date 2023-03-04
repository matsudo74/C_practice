#include <stdio.h>

int main(void)
{
  int i = 0;
  int num, sum = 0;

  while (num > 0)
  {
    printf("整数を入力：");
    scanf("%d", &num);
    if (num > 0)
    {
      sum += num;
      i++;
    }
  }

  printf("入力したデータは%d個、総計は%d、平均値は%.2fです。\n", i, sum, (double)sum / (double)i);

  return (0);
}
