#include <stdio.h>

int main(void)
{
  int m;

  printf("何月ですか？:");
  scanf("%d", &m);

  if (m >= 3 && m <= 5)
    puts("春ですね");
  else if (m >= 6 && m <= 8)
    puts("夏ですね");
  else if (m >= 9 && m <= 11)
    puts("秋ですね");
  else if (m == 12 || m == 1 || m == 2)
    puts("冬ですね");
  else
    puts("そんな月なくて草");

  return (0);
}
