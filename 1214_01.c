#include <stdio.h>
#include <math.h>

int main(void)
{
  int a[10], i;
  int score;
  int sum = 0;
  double ave, sum_2, sum_3 = 0;

  for (i = 0; i <= 9; i++)
  {
    printf("学籍No.%dの成績：", i + 1);
    scanf("%d", &score);

    a[i] = score;
    sum += a[i];
  }

  ave = (double)sum / 10;

  printf("平均値は%.2f点です。\n", ave);

  for (i = 0; i <= 9; i++)
  {
    sum_2 = (a[i] - ave) * (a[i] - ave);
    sum_3 += sum_2;
  }

  printf("分散は%.2f点です。\n", sum_3 / 10);
  printf("標準偏差は%.2f点です。\n", sqrt(sum_3 / 10));
  return (0);
}
