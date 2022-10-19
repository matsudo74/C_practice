#include <stdio.h>
int main(void)
{
  int x;

  printf("整数値を入力せよ：");
  scanf("%d", &x);

  if (x % 5)
    puts("その値は５で割り切れません。");

  return (0);
}
