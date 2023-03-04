int fibonacci2(int n){
  int F;
  if (n ==0 )
    F = 0;
  if (n == 1)
    F = 1;
  if (n > 1)
    F = fibonacci2(n - 1) + fibonacci2(n - 2);
  return F;
}
