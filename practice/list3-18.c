#include <stdio.h>

int main(void)
{
  int a;

  printf("整数を入力してください。：");
  scanf("%d", &a);

  switch (a % 3)
  {
  case 0:
    puts("この数は３で割り切れます。");
    break;
  case 1:
    puts("この数を３で割ると１余ります");
    break;
  case 2:
    puts("この数を３で割ると２余ります");
    break;
  }

  return (0);
}
