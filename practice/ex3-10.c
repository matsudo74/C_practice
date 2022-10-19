#include <stdio.h>

int main(void)
{
  int a, b, c;

  printf("整数を2つ入力してください。:");
  scanf("%d %d", &a, &b);

  c = a - b;
  if (c < 0)
    c = c * -1;

  if (c > 10)
    puts("その差は10より大きいです。");
  else
    puts("その差は10以下です。");

  return (0);
}
