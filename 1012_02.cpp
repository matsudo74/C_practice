#include <stdio.h>
int main(void)
{
  double h, m, bmi;

  printf("身長(m)と体重(kg)を入力:");
  scanf("%lf%lf", &h, &m);

  bmi = m / (h * h);

  printf("BMIは%.1fです。\n", bmi);

  if (bmi < 18.5)
    puts("痩せすぎです。");
  else if (bmi > 25.0)
    puts("太り過ぎです。");
  else
    puts("適正体重です。");

  return (0);
}
