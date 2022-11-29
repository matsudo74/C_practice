#include <stdio.h>

int main(void)
{
  int num, sum;

  printf("所得割が非課税になるかどうか判定します。\n");

  printf("生計を同一とする扶養親族のあなたを含んだ人数を教えてください。");
  scanf("%d", &num);

  if (num == 0)
    printf("合計所得金額が45万円以下ならば非課税です。\n");
  if (num != 0)
  {
    sum = 35 * num + 31;
    printf("合計所得金額が%d万円以下ならば非課税です。\n", sum);
  }
  return (0);
}
