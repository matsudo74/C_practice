#include <stdio.h>
int main(void)
{
  int x, y, z;
  int m;
  double a;

  printf("整数値を３つ入力せよ：");
  scanf("%d%d%d", &x, &y, &z);

  printf("入力した値は%dと%dと%dです\n", x, y, z);

  m = x + y + z;

  printf("合計は%d\n", m);

  a = (double)m / 3;

  printf("平均値は%f\n", a);
  return (0);
}
