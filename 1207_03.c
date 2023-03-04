#include <stdio.h>
#include <math.h>

int main(void)
{
  double c;
  double u, v;

  printf("正の数値を入力:");
  scanf("%lf", &c);

  v = 1;
  // x_0=u,x_1=v
  do
  {
    u = v;
    v = (2 * u + (c / (u * u))) / 3;
    if (fabs(v - u) < 0.00001)
    {
      break;
    }
  } while (fabs(v - u) > 0.00001);

  printf("10の立法根は%fです。\n", v);

  return (0);
}
