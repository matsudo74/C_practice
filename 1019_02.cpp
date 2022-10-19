#include <stdio.h>
int main(void)
{
  int a, b;

  printf("整数値を二つを入力せよ：");
  scanf("%d %d", &a, &b);

  if (a > b)
    printf("大きい方は%dです。\n", a);
  else if (a < b)
    printf("大きい方は%dです。\n", b);
  else
    puts("二つの数は等しいです。\n");

  return (0);
}
