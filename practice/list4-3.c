#include <stdio.h>

int main(void)
{
  int num;
  int dig;

  do
  {
    printf("非負の数を入力してください。：");
    scanf("%d", &num);

    if (num < 0)
    {
      printf("負の数を入力しないでください。\n");
    }
  } while (num < 0);

  dig = 0;

  printf("%dの桁数は", num);

  do
  {
    num = num / 10;
    dig = dig + 1;
  } while (num > 0);

  printf("%dです。\n", dig);

  return (0);
}
