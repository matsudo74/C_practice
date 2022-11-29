#include <stdio.h>

int main(void)
{
  int i, a;

  printf("正の整数を入力してください：");
  scanf("%d", &a);

  for (i = 0; i <= a; i++)
  {
    printf("%d ", i);
  }
  printf("\n");

  return (0);
}
