#include <stdio.h>

double a(int i)
{
  int j;
  double pre_answer = 2, answer;

  if (i == 1)
  {
    answer = 2;
  }
  else
  {
    for (j = 1; j < i; j++)
    {
      answer = (2 * pre_answer) / (3 * pre_answer + 4);
      pre_answer = answer;
    }
  }

  return answer;
}

int main(int ac, char *av[])
{
  int i;
  double r;

  for (i = 1; i < 11; i++)
  {
    printf("a(%d) = %10.5lf\n", i, a(i));
  }

  return 0;
}
