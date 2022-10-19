#include <stdio.h>
int main(void)
{
  int a, b;

  printf("整数値２つを入力せよ\n");
  printf("整数A：");
  scanf("%d", &a);
  printf("整数B：");
  scanf("%d", &b);

  if (a > b)
    puts("Aの方が大きいです。");
  else if (a < b)
    puts("Bの方が大きいです。");
  else
    puts("AとBは等しいです。");

  return (0);
}
