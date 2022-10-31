#include <stdio.h>

int main(void)
{
  double a, b, c;
  char answer, student;
  int sum, sum_1, result, result_1;

  printf("学生が扶養内で働けるかを計算します。\n");
  printf("1月から12月までの給与収入（万）を入力してください。：");
  scanf("%lf", &a);
  printf("1月から12月までの事業収入（万）を入力してください。：");
  scanf("%lf", &b);
  printf("1月から12月までの経費（万）を入力してください。：");
  scanf("%lf", &c);

  printf("収入の合計は%.f万円です。\n", a + b - c);

  switch ((int)b)
  {
  case 0:
    result_1 = 0;
    sum = (int)a;
    result = sum - 103;
    if (result < 0)
    {
      result = 0;
    }
    printf("控除を受けると所得は%d万円になります。\n", result);
    break;
  default:
    sum = (int)a;
    sum_1 = (int)(b - c);
    result_1 = sum_1 - 48;
    result = (sum + result_1) - 55;
    if (result < 0)
    {
      result = 0;
    }
    printf("控除を受けると所得は%d万円になります。\n", result);
    break;
  }

  if (result_1 > 0)
  {
    printf("扶養から抜けてしまいます。\n");
  }
  else if (result > 0)
  {
    printf("扶養から抜けてしまいます。\n");
  }
  else
  {
    printf("扶養内です。\n");
  }

  return (0);
}
