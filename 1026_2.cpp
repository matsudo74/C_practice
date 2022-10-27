#include <iostream>
#include <time.h>
int main(int ac, char *av[])
{
  int a, b, r;
  srand(time(NULL));
  a = rand() % 3;

  printf("グーチョキパーのいずれかを入力。\n");
  printf("0: グー、1:チョキ、2:パー :");
  scanf("%d", &b);

  if (b >= 0 && b <= 2)
  {
    switch (a)
    {
    case 0:
      switch (b)
      {
      case 0:
        printf("あなたはグーで私もグーです。\n");
        break;
      case 1:
        printf("あなたはチョキで私はグーです。\n");
        break;
      case 2:
        printf("あなたはパーで私はグーです。\n");
        break;
      }
      break;
    case 1:
      switch (b)
      {
      case 0:
        printf("あなたはグーで私はチョキです。\n");
        break;
      case 1:
        printf("あなたはチョキで私もチョキです。\n");
        break;
      case 2:
        printf("あなたはパーで私はチョキです。\n");
        break;
      }
      break;
    case 2:
      switch (b)
      {
      case 0:
        printf("あなたはグーで私はパーです。\n");
        break;
      case 1:
        printf("あなたはチョキで私はパーです。\n");
        break;
      case 2:
        printf("あなたはパーで私もパーです。\n");
        break;
      }
      break;
    }

    if (a == b)
      r = 0;
    else if (a == 0 && b == 2 || a == 1 && b == 0 || a == 2 && b == 1)
      r = 1;
    else
      r = 2;

    switch (r)
    {
    case 0:
      printf("あいこです。\n");
      break;
    case 1:
      printf("私の勝ちです。\n");
      break;
    case 2:
      printf("あなたの勝ちです。\n");
      break;
    }
  }
  else
    puts("入力を確認してください。");

  return (0);
}
