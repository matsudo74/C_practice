#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
int main(int ac, char *av[])
{
  double a, b, c, d, x, x_1, x_2;

  printf("二次方程式(ax^2+bx+c)の係数を順に入力せよ：");
  scanf("%lf,%lf,%lf", &a, &b, &c);

  d = (b * b) - (4 * a * c);
  x = -b / (2 * a);
  x_1 = (-b + sqrt(d)) / (2 * a);
  x_2 = (-b - sqrt(d)) / (2 * a);

  if (a == 0)
    puts("a=0であるとき、二次方程式ではありません。");
  else
  {
    if (d < 0)
      puts("解は実数ではありません。");
    else if (d == 0)
      printf("解は%.0fです。", x);
    else
      printf("解は%.0fと%.0fです。\n", x_1, x_2);
  }

  return (0);
}
