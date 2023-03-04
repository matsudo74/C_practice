#include <stdio.h>
#include <string.h>

int main(void)
{
  char string[100];
  int len;

  printf("文字列を入力：");
  scanf("%s", string);

  len = strlen(string);

  printf("文字列を逆にすると");

  while (len >= 0)
  {
    printf("%c", string[len]);
    len--;
  }

  printf("です。\n");

  return (0);
}
