#include <stdio.h>
#include <string.h>

int main(void)
{
  char string_1[100], string_2[100];
  int len_1, len_2, len_3;

  printf("第1文字列を入力：");
  scanf("%s", string_1);
  printf("第2文字列を入力：");
  scanf("%s", string_2);

  len_1 = strlen(string_1);
  len_2 = strlen(string_2);

  printf("第1文字列%sの長さは%d\n", string_1, len_1);
  printf("第2文字列%sの長さは%d\n", string_2, len_2);

  strcat(string_1, string_2);
  len_3 = strlen(string_1);

  printf("連結した文字列は%sで長さは%d\n", string_1, len_3);

  return (0);
}
