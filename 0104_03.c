#include <stdio.h>
int yakusuu(int i)
{
  int n, j;
  int s = 0; /* 和を記録*/
  n = i;     /* nの値を設定*/
  for (i = 1; i < n; i++)
  {
    if (n % i == 0)
    {
      s += i;
    }
  }
  return s;
}
int main(int ac, char *av[])
{
  int i, j, n;
  printf("整数nを入力してください。：");
  scanf("%d", &n);
  for (i = 1; i < n; i++)
  {
    j = yakusuu(i);
    if (i == j)
      printf("%dは完全数です\n", i);
  }
  return 0;
}
