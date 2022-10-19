#include <stdio.h>
int main(void)
{
  int a, b;

  printf("整数値を2つ入力せよ：");
  scanf("%d%d", &a, &b);

  if (a == b)
    puts("それらは同じ値です。");
  else
    puts("それらは違う値です。");

  /*if構文はifで条件を満たしたらelseifまで考えてくれない*/
  return (0);
}
