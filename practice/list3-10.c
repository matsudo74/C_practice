#include <stdio.h>
int main(void)
{
  int a, b;

  printf("整数値2つを入力せよ：");
  scanf("%d%d", &a, &b);

  if (a > b)
    printf("大きい方の数は%dです。\n", a);
  else
    printf("大きい方の数は%dです。\n", b);
  return (0);
}
