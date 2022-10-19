#include <stdio.h>

int main(void)
{
  int a, b, c;

  printf("整数を2つ入力してください。\n");
  printf("整数A：");
  scanf("%d", &a);
  printf("整数B：");
  scanf("%d", &b);

  c = 100 * a / b;

  printf("AはBの%d％です。\n", c);

  return (0);
}
