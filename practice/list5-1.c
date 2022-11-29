#include <stdio.h>

int main(void)
{
  int data_1, data_2, data_3, data_4, data_5;
  int sum = 0;

  printf("1人目の点数：");
  scanf("%d", &data_1);
  printf("2人目の点数：");
  scanf("%d", &data_2);
  printf("3人目の点数：");
  scanf("%d", &data_3);
  printf("4人目の点数：");
  scanf("%d", &data_4);
  printf("5人目の点数：");
  scanf("%d", &data_5);

  sum += data_1;
  sum += data_2;
  sum += data_3;
  sum += data_4;
  sum += data_5;

  printf("合計点数：%d\n", sum);
  printf("平均点：%.1f\n", (double)sum / 5);

  return (0);
}
