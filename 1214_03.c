#include <stdio.h>

int main(void)
{
  int score[6][4] = {{85, 70, 77, 0}, {68, 75, 63, 0}, {55, 80, 60, 0}, {75, 63, 91, 0}, {47, 53, 70, 0}, {0, 0, 0, 0}};
  int i, j;

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 5; j++)
    {
      score[j][3] += score[j][i];
    }
  }

  // 平均

  for (j = 0; j < 4; j++)
  {
    for (i = 0; i < 5; i++)
    {
      score[5][j] += score[i][j];
    }
  }

  for (j = 0; j < 4; j++)
  {
    score[5][j] = ((double)score[5][j] / 5) + 0.5;
  }

  printf(" 情報 数学 英語 合計\n");

  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf(" %d  ", score[i][j]);
    }
    printf("\n");
  }

  return (0);
}
