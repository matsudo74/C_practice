#include <stdio.h>
#include <string.h>

int main(void)
{
  char string_1[100], string_2[100];
  int i = 0, flag;

  printf("第1文字列を入力：");
  scanf("%s", string_1);
  printf("第2文字列を入力：");
  scanf("%s", string_2);

  while (string_1[i] != '\n' || string_2[i] != '\n')
  {
    if (string_1[i] != string_2[i])
    {
      flag = 1;
      break;
    }
    i++;
  }

  if (flag == 1)
  {
    printf("二つの文字列は同じです。\n");
  }

  else
  {
    printf("二つの文字列は違います。\n");
  }

  return (0);
}
