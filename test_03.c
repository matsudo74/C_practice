#include <stdio.h>

int main(void)
{

  int m, n, r, tmp;
  int m_0, n_0;

  printf("2つの自然数を入力してください。\n");
  printf("1つ目の自然数 = ");
  scanf("%d", &m);
  printf("2つ目の自然数 = ");
  scanf("%d", &n);

  /* 自然数 a > b を確認・入替 */
  if (m < n)
  {
    tmp = m;
    m = n;
    n = tmp;
  }

  m_0 = m;
  n_0 = n;

  /* ユークリッドの互除法 */
  r = m % n;
  while (r != 0)
  {
    m = n;
    n = r;
    r = m % n;
  }

  /* 最大公約数=n */

  if (m_0 % n_0 == 0)
  {
    printf("%d/%dは通分すると %d です。\n", m_0, n_0, m_0 / n_0);
  }
  else
  {
    printf("%d/%dは通分すると %d/%d です。\n", m_0, n_0, m_0 / n, n_0 / n);
  }

  return 0;
}
