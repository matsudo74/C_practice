#include <stdio.h>
int main(void)
{
  int a, b;

  printf("整数値２つを入力せよ\n");
  printf("整数A：");
  scanf("%d", &a);
  printf("整数B：");
  scanf("%d", &b);

  if (a % b)
    puts("整数Bは整数Aの約数ではありません。");
  else
    puts("整数Bは整数Aの約数です。");

  return (0);
}
