#include <stdio.h>

int main(void)
{
  int num;
  do
  {
    printf("数字を入力してください:");
    scanf("%d", &num);
    int a = 0;
    if (num == 1)
    {
      printf("%dは素数ではありません\n", num);
    }

    else
    {
      for (int i = 2; i <= num; i++)
      {
        if (num % i == 0)
        {
          a++;
        }
      }
      if (a == 1)
      {
        printf("%dは素数です\n", num);
      }
      else
      {
        printf("%dは素数ではありません\n", num);
      }
    }
  } while (num >= 0);
  return 0;
}
