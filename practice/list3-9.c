#include <stdio.h>
int main(void)
{
  int a;

  printf("整数値を入力せよ：");
  scanf("%d", &a);

  if (a > 0)
    puts("この値は正です。");
  else if (a < 0)
    puts("この値は負です。");
  else
    puts("この値は０です。");
  return (0);
}
