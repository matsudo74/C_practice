#include <stdio.h>

int main(void)
{
  char c;

  printf("予習してきましたか？(y/n)：");
  scanf("%s", &c);

  switch (c)
  {
  case 'y':
    printf("大変結構です。\n");
    break;
  case 'n':
    printf("単位を落としても知らないよ。\n");
    break;
  default:
    printf("質問の答えになっていないよ。\n");
    break;
  }

  return (0);
}
