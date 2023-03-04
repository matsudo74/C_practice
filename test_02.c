#include <stdio.h>
#include <math.h>

int main(void)
{
  int a[10], i, j, t;
  int score;
  int sum = 0;
  double ave;

  for (i = 0; i <= 9; i++)
  {
    printf("%d人目の点数：", i + 1);
    scanf("%d", &score);

    a[i] = score;
    sum += a[i];
  }

  ave = (double)sum / 10;

  printf("平均値は%.2f点です。\n", ave);

  for (i = 0; i < 10; i++)
  {
    for (j = i + 1; j < 10; j++)
    {
      if (a[i] < a[j])
      {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
      }
    }
  }

  printf("最高点は%d点です。\n", a[0]);
  printf("最低点は%d点です。\n", a[9]);

  return (0);
}
