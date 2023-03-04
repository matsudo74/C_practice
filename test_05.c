#include <stdio.h>
#include <string.h>

int main(void)
{
  char str1[100], str2[100];
  int k, len, j, x;

  k = 0;
  len = 0;
  j = 0;
  x = 0;

  printf("回文か判定します、文字を入力してください:");
  scanf("%s", str1);
  len = strlen(str1);
  for (k = 0; k < len; k++)
  {
    str2[len - (k + 1)] = str1[k];
  }

  for (j = 0; j < len; j++)
  {
    if (str1[j] == str2[j])
    {
      if (x == 0)
        x = 0;
    }
    else
    {
      x = 1;
    }
  }

  if (x == 0)
  {
    printf("%sは逆に読んでも%sで回文です。\n", str1, str2);
  }
  else
  {
    printf("%sは逆に読むと%sで回文ではありません。\n", str1, str2);
  }

  return 0;
}
