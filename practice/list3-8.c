#include <stdio.h>
int main(void)
{
  int a;

  printf("整数値を入力せよ：");
  scanf("%d", &a);

  if (a % 10 == 5)
    puts("最も下の桁は５です。");

  return (0);
}
