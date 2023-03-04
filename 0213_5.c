#include <stdio.h>

int main()
{
  int i, j;
  double c[100], sum = 0, heikin, t;
  FILE *fp;
  errno_t err;
  err = fopen(&fp, "data", "r");
  if (err != 0)
  {
    printf("ファイルが開けません。\n");
    exit(1);
  }
  else
  {
    for (i = 0; i < 100; i++)
    {
      fscanf(fp, "%lf", &c[i]);
      sum += c[i];
    }
    heikin = sum / 100;
    printf("平均値は%lfです。\n", heikin);
    for (i = 0; i < 100; i++)
    {
      for (j = i + 1; j < 100; j++)
      {
        if (c[i] > c[j])
        {
          t = c[i];
          c[i] = c[j];
          c[j] = t;
        }
      }
    }
    printf("小さい順に並べ替えると\n");
    for (i = 0; i < 100; i++)
    {
      printf("%lf\n", c[i]);
    }
  }
}
