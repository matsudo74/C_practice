#include <stdio.h>

int main(void)
{
  int a;

  printf("何月か言うてみ。：");
  scanf("%d", &a);

  switch (a)
  {
  case 3:
  case 4:
  case 5:
    puts("春ですね");
    break;
  case 6:
  case 7:
  case 8:
    puts("夏ですね");
    break;
  case 9:
  case 10:
  case 11:
    puts("秋ですね");
    break;
  case 12:
  case 1:
  case 2:
    puts("冬ですね");
    break;
  default:
    puts("そんな月ほんまにあるんか？");
    break;
  }

  return (0);
}
