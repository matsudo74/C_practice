#include <stdio.h>

int main(void)
{
  int i;
  int num, tmp;
  int sum = 0;

  printf("いくつ入力しますか？");
  scanf("%d", &num);

  for (i = 1; i <= num; i++)
  {
    printf("%d番目の数は　", i);
    scanf("%d", &tmp);
    sum += tmp;
  }

  printf("%d個の数の合計は%dです。\n", num, sum);
  printf("5個の数の平均は%.1fです。\n", (double)sum / num);

  return (0);
}
