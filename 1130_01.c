#include <stdio.h>
#include <math.h>

int main(void)
{
  double i;
  double sum = 0.0;
  double num, sum_1;
  double result;

  printf("分割値を入力：");
  scanf("%lf", &num);

  for (i = 1; i <= num; i++)
  {
    sum_1 = 1.0 / (1.0 + ((i / num) * (i / num)));
    sum += sum_1;
  }

  result = (4.0 / num) * sum;

  printf("円周率の近似値は%fです。\n", result);

  return (0);
}
