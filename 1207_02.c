#include <stdio.h>

int main(void)
{
  char a;
  int i, j, line;

  printf("文字は何にする？");
  scanf("%c", &a);

  printf("行数は？");
  scanf("%d", &line);

  for (i = 1; i <= line; i++)
  {
    for (j = 0; j <= line - i; j++)
    {
      printf("%c", a);
    }
    printf("\n");
  }

  return (0);
}
