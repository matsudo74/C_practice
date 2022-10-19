#include <stdio.h>
int main(void)
{
  int a, b, c, max;

  printf("整数値を3つ入力せよ：");
  scanf("%d%d%d", &a, &b, &c);

  max = a;

  if (max < b)
    max = b;
  if (max < c)
    max = c;

  /*if構文はifで条件を満たしたらelseifまで考えてくれない*/

  printf("最大値は%dです。\n", max);
  return (0);
}
