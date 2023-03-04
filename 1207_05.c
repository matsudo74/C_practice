#include <stdio.h>

int main(void)
{
  char c;

  printf("納豆は好きですか? 下記から選んで。\n");
  printf("a) 好き、b) 嫌い、c) 分からない!");
  scanf("%s", &c);

  switch (c)
  {
  case 'a':
    printf("納豆おいしいよね。健康にも良いし!\n");
    break;
  case 'b':
    printf("私も嫌いです!\n");
    break;
  case 'c':
    printf("納豆を食べたことが無いのですか。\n");
    break;
  }

  return (0);
}
