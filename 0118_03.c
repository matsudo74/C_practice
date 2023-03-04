#include <stdio.h>
#include <math.h>

struct Point
{
  double x, y, z;
};
typedef struct Point Point;
double distance(Point p1, Point p2);

int main()
{
  Point p1, p2;
  printf("点1を入力：");
  scanf("%lf %lf %lf", &p1.x, &p1.y, &p1.z);
  printf("点２を入力：");
  scanf("%lf %lf %lf", &p2.x, &p2.y, &p2.z);
  double t = distance(p1, p2);
  printf("点１と点２の距離は%lfです。", t);
}

double distance(Point p1, Point p2)
{
  double a, b, c, t;
  a = pow(p1.x - p2.x, 2); // 2乗計算
  b = pow(p1.y - p2.y, 2);
  c = pow(p1.z - p2.z, 2);

  t = sqrt(a + b + c); // ルート
  return t;
}
