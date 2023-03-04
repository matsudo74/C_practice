#include <math.h>
#include <stdio.h>

void calculate(int score[10], int size, double *heikin, double *hensa)
{
  int sum = 0, i;
  double sum_1 = 0;

  for (i = 0; i < 10; i++)
  {
    sum += score[i];
  }

  *heikin = (double)sum / 10;

  for (i = 0; i < 10; i++)
  {
    sum_1 += (*heikin - (double)score[i]) * (*heikin - (double)score[i]);
  }

  *hensa = sqrt(sum_1 / 10);
}

int main(int ac, char *av[])
{
  int score[10] = {95, 80, 90, 71, 85, 66, 73, 77, 46, 87};
  double heikin, hensa;
  calculate(score, 10, &heikin, &hensa);
  printf("平均点は %10.2lf\n", heikin);
  printf("標準偏差は %10.2lf\n", hensa);
  return 0;
}
