#include <stdio.h>

int main(void)
{
  int a;

  printf("月を入力せよ：");
  scanf("%d", &a);

  switch (a)
  {
  case 3:
    printf("%d月は春です\n", a);
    break;
  case 4:
    printf("%d月は春です\n", a);
    break;
  case 5:
    printf("%d月は春です\n", a);
    break;
  case 6:
    printf("%d月は夏です\n", a);
    break;
  case 7:
    printf("%d月は夏です\n", a);
    break;
  case 8:
    printf("%d月は夏です\n", a);
    break;
  case 9:
    printf("%d月は秋です\n", a);
    break;
  case 10:
    printf("%d月は秋です\n", a);
    break;
  case 11:
    printf("%d月は秋です\n", a);
    break;
  case 12:
    printf("%d月は冬です\n", a);
    break;
  case 1:
    printf("%d月は冬です\n", a);
    break;
  case 2:
    printf("%d月は冬です\n", a);
    break;
  default:
    puts("そんな月はありません");
    break;
  }

  return (0);
}
