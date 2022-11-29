#include <stdio.h>

int main(void)
{
  int i = 0, code;

  printf("文字を入力:");
  while ((code = getchar()) != '\n')
  {
    ++i;
  }

  printf("文字数は%d文字です。\n", i);
  return (0);
}
