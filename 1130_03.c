#include <stdio.h>

int main(void)
{
  int a, b, remain;

  printf("整数を2つ入力してください。：");
  scanf("%d %d", &a, &b);

  do
  {
    remain = a % b;
    if (remain == 0)
    {
      printf("最大公約数は%dです。\n", b);
      break;
    }
    else if (remain == 1)
    {
      printf("%dと%dは互いに素です。\n", a, b);
    }
    else
    {
      a = b;
      b = remain;
    }
  } while (remain == 0);

  return (0);
}
