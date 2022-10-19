#include <stdio.h>
int main(void)
{
  int x;

  printf("整数値を入力せよ：");
  scanf("%d", &x);

  if (x % 2)
    puts("その数は奇数です。");
  else
    puts("その数は偶数です。");

  return (0);
}
