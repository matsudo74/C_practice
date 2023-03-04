#include <stdio.h>

double my_function(double a, double b, double c, double x)
{
  double answer;

  answer = a * (x * x) + b * x + c;
  return answer;
}

int main(int ac, char *av[])
{
  double a, b, c;
  double x, y;
  int i;
  printf("二次関数の係数を三つ入力:");
  scanf("%lf %lf %lf", &a, &b, &c);
  for (i = 0; i <= 10; i++)
  {
    x = i * 0.1;
    y = my_function(a, b, c, x);
    printf("%10.2f, %10.4f\n", x, y);
  }
  return 0;
}
