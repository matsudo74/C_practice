#include <stdio.h>

int main(void)
{
  double base, use, use_1, charge, charge_1, result;

  printf("使用量(kWh)を入力してください:");
  scanf("%lf", &use);

  if (use <= 120)
  {
    charge = use * 20.31;
  }
  else if (use > 120 && use <= 300)
  {
    charge_1 = (use - 120) * 25.71;
    charge = (120 * 20.31) + charge_1;
  }
  else if (use > 300)
  {
    use_1 = use - 300;
    charge_1 = use_1 * 28.70;
    charge = (120 * 20.31) + (180 * 25.71) + charge_1;
  }

  result = 341.01 + charge;

  printf("料金は%.0f円です。\n", result);

  return (0);
}
