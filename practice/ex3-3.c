#include <stdio.h>
int main(void)
{
  int a;

  printf("整数値を入力せよ：");
  scanf("%d", &a);

  if (a > 0)
    printf("絶対値は%dです。\n", a);
  else if (a < 0)
    printf("絶対値は%dです。\n", -1 * a);
  else
    puts("絶対値は0です。\n");

  return (0);
}
