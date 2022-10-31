#include <stdio.h>

int main(void)
{
  int num;

  do
  {
    printf("非負の数を入力してください。：");
    scanf("%d", &num);

    printf("入力された値は%dです。\n", num);

    if (num < 0)
    {
      printf("負の数を入力しないでください。\n");
    }
  } while (num < 0);

  printf("%d逆から読むと", num);

  do
  {
    printf("%d", num % 10);
    num = num / 10;
  } while (num > 0);

  puts("です。");

  return (0);
}
