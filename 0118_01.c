#include <stdio.h>

struct complex
{
  double real, imag; // real:実数部分、imag:虚数部分
};
typedef struct complex Complex; // Complexというデータ型を定義
Complex cmult(Complex x, Complex y);

int main()
{
  Complex x = {1.0, 1.0};     // ｛ｘ.real, ｘ.imag｝
  Complex y = {1.414, 1.414}; // ｛ｙ.real, ｙ.imag｝
  Complex z;
  z = cmult(x, y); // cmultでしたｚの計算を代入

  printf("z = %lf + %lfi\n", z.real, z.imag);

  return 0;
}

Complex cmult(Complex x, Complex y)
{
  Complex z;

  z.real = x.real * y.real - x.imag * y.imag; // zの実数部分
  z.imag = x.real * y.imag + y.real * x.imag; // zの虚数部分

  return z;
}
