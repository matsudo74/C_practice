int fibonacci1(int n){
  int i, f0=0, f1=1, F;
    if (n == 0)
      F = 0;
    if (n == 1)
      F = 1;
    for (i =2; i <= n; i++) {
      F = f0 + f1;
      f0 = f1;
      f1 = F;
    }
  return F;
}
