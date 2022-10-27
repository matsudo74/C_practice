#include <stdio.h>

int main(void)
{
  char a;

  printf("いらっしゃい！ネタは何にする？\n");
  printf("a) マグロ、b) ヒラメ、c) ウニ、だよ!：");
  scanf("%c", &a);

  switch (a)
  {
  case 'a':
    printf("マグロ一丁ね！\n");
    break;
  case 'b':
    printf("ヒラメはカレイと違うんだよ!\n");
    break;
  case 'c':
    printf("ウニはミョウバンくさいよな！\n");
    break;
  default:
    printf("そんなネタないよ!\n");
    break;
  }

  return (0);
}
