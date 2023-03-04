#include <stdio.h>

int graph(int a, int b, int c)
{
  double i, star;
  int j, answer;
  for (i = 0; i <= 2.0; i += 0.1)
  {
    star = a * i * i + b * i + c;
    answer = star + 0.5;
    for (j = 0; j < answer; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  return (0);
}

int main(void)
{
  int a, b, c;

  printf("二次式の係数a,b,cを入力： ");
  scanf("%d,%d,%d", &a, &b, &c);

  graph(a, b, c);

  return 0;
}
