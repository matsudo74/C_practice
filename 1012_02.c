#include <stdio.h>
int main(void)
{
  double h, m;

  printf("身長(m)と体重(kg)を入力:");
  scanf("%lf%lf", &h, &m);

  printf("BMIは%fです。\n", m / (h * h));

  return (0);
}
