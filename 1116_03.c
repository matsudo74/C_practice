#include <stdio.h>
#include <math.h>

int main(void)
{
  double u, v;
  v = 1;
  // x_0=u,x_1=v
  do
  {
    u = v;
    v = u - (u * u - 2) / (2 * u);
    if (fabs(v - u) < 0.00001)
    {
      break;
    }
  } while (fabs(v - u) > 0.00001);

  printf("%f\n", v);

  return (0);
}
