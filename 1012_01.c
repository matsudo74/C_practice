#include <stdio.h>
int main(void)
{
  int a, b;

  printf("整数値を２つ入力せよ：");
  scanf("%d%d", &a, &b);

  printf("入力した値は%dと%dです\n", a, b);
  printf("%d+%d=%d\n", a, b, a + b);
  printf("%d-%d=%d\n", a, b, a - b);
  printf("%d*%d=%d\n", a, b, a * b);
  printf("%d/%d=%d\n", a, b, a / b);
  printf("%d%%%d=%d\n", a, b, a % b);
  return (0);
}

/*％は整数型の時にだけ使用、四捨五入される*/
