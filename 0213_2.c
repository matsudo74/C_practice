#include <stdio.h>

int main()
{
  int i;
  printf("西暦2001年から2400年までの閏年は以下の通りです。\n");
  for (i = 2001; i <= 2400; i++)
  {
    if (i % 400 == 0)
    {
      printf("%d年, ", i);
    }
    else
    {
      if (i % 100 != 0 && i % 4 == 0)
      {
        printf("%d年, ", i);
      }
    }
  }
  printf("\n");
}
