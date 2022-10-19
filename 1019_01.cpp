#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
int main(int ac, char *av[])
{
  double d, A, tan_A, h;
  printf("水平方向の距離(m)を入力せよ：");
  scanf("%lf", &d);

  printf("仰角（°）を入力せよ：");
  scanf("%lf", &A);

  tan_A = tan(M_PI * A / 180);
  h = tan_A * d;

  printf("木の高さ%.2f mです。\n", h);

  return (0);
}
