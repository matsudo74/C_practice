#include <stdio.h>

int main(void)
{
  int c;

  printf("大文字のアルファベット1文字を入力：");
  scanf("%d", &c);

  c = getchar();

  if (c >= 'A' && c <= 'Z')
    printf("%c の小文字は %c\n", c, c + 32);
  else
    printf("%cは大文字のアルファベットではありません\n", c);

  return (0);
}
