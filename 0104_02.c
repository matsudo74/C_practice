#include <stdio.h>

int hantei(int s)
{
  int hantei;

  if (100 >= s && 90 >= s)
  {
    hantei = 4;
  }
  else if (89 >= s && 80 >= s)
  {
    hantei = 3;
  }
  else if (79 >= s && 70 >= s)
  {
    hantei = 2;
  }
  else if (69 >= s && 60 >= s)
  {
    hantei = 1;
  }
  else if (59 >= s && 0 >= s)
  {
    hantei = 0;
  }
  else
  {
    hantei = -1;
  }
  return hantei;
}

int main(int ac, char *av[])

{

  int s, d;

  printf("成績を入力：");

  scanf("%d", &s);

  d = hantei(s);

  switch (d)
  {
  case 4:
    printf("成績は秀です。\n");
    break;

  case 3:
    printf("成績は優です。\n");
    break;

  case 2:
    printf("成績は良です。\n");
    break;

  case 1:
    printf("成績は可です。\n");
    break;

  case 0:
    printf("成績は不可です。\n");
    break;

  default:

    printf("エラーです。成績を判定できません。\n");
  }

  return 0;
}
