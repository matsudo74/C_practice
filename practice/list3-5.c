#include <stdio.h>
int main(void)
{
  int x;

  printf("整数値を入力せよ：");
  scanf("%d", &x);

  if (x)
    puts("その数は0ではありません。");
  else
    puts("その数は0です。");

  return (0);
}
