#include <stdio.h>

int main(void)
{
  int a;

  printf("整数を入力してください。：");
  scanf("%d", &a);

  switch (a)
  {
  case 1:
    puts("A");
    puts("B");
    break;
  case 2:
    puts("C");
  case 5:
    puts("D");
    break;
  case 6:
  case 7:
    puts("E");
    break;
  default:
    puts("F");
    break;
  }

  return (0);
}
