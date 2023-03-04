#include <stdio.h>

int main(void)
{
  int time;

  printf("現在の時刻を入力してください：");
  scanf("%d", &time);

  if (time >= 0 && time < 12)
  {
    printf("%d時です、おはようございます。\n", time);
  }
  else if (time == 12)
  {
    printf("お昼です\n");
  }
  else if (time > 12 && time <= 17)
  {
    printf("%d時です、こんにちは\n", time);
  }
  else if (time > 18)
  {
    printf("%d時です、こんばんは。\n", time);
  }
  else
  {
    printf("そんな時刻はありません。\n");
  }

  return (0);
}
