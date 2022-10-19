#include <stdio.h>

int main(void)
{
  int a, b, c;

  printf("整数を3つ入力してください。:");
  scanf("%d %d %d", &a, &b, &c);

  if (a == b && b == c)
    puts("3つの値は等しいです。");
  else if (a == b)
    puts("２つの値は等しいです。");
  else if (b == c)
    puts("２つの値は等しいです。");
  else if (a == c)
    puts("２つの値は等しいです。");
  else
    puts("全部違くて草");

  return (0);
}
