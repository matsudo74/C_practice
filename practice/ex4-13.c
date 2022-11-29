#include <stdio.h>

int main(void)
{
  int i;
  int num;

  printf("整数を入力：");
  scanf("%d", &num);

  for (i = 1; i <= num; i++)
  {
    printf("%d ", i % 10);
  }
  printf("\n");

  return (0);
}
