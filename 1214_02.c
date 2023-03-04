#include <stdio.h>

int main(void)
{
  int data[10], i, j, t, num;

  for (i = 0; i < 10; i++)
  {
    printf("%d番目のデータ：", i + 1);
    scanf("%d", &num);

    data[i] = num;
  }

  for (i = 0; i < 10; i++)
  {
    for (j = i + 1; j < 10; j++)
    {
      if (data[i] < data[j])
      {
        t = data[i];
        data[i] = data[j];
        data[j] = t;
      }
    }
  }

  printf("大きさの順に並べると\n");

  for (i = 0; i < 10; i++)
  {
    printf("%d\n", data[i]);
  }

  return (0);
}
