#include <stdio.h>

int main()
{
  int i;
  printf("西暦年を入力:");
  scanf("%d", &i);
  if (i % 400 == 0)
  {
    printf("%d年は閏年です。\n", i);
  }
  else
  {
    if (i % 100 == 0)
    {
      printf("%d年は閏年ではありません。\n", i);
    }
    else
    {
      if (i % 4 == 0)
      {
        printf("%d年は閏年です。\n", i);
      }
      else
        printf("%d年は閏年ではありません。\n", i);
    }
  }
}
