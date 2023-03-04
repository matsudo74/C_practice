#include <stdio.h>

struct student
{
  char lastname[20], firstname[20];
  int number, age;
};
void read_data(struct student *s);
void write_data(struct student s);

int main()
{
  struct student s;
  read_data(&s);
  printf("登録データ\n");
  write_data(s);
  return 0;
}

void read_data(struct student *s) // 入力データ //ここでsを付けることでstructの内容を丸ごと持ってこれる、intにまとまる時sだけで良くなるから便利
{
  printf("名字は：");
  scanf_s("%s", s->lastname, 20); // s->は(s＊).のこと、scanfで配列を入れる時は,20(要素数)が必要
  printf("名前は：");
  scanf("%s", s->firstname, 20);
  printf("学籍番号は：");
  scanf("%d", &s->number);
  printf("年齢：");
  scanf("%d", &s->age);
}

void write_data(struct student s) // 出力データ
{
  printf(" %s", s.lastname);
  printf(" %s\n", s.firstname);
  printf(" %d\n", s.number);
  printf(" %d歳", s.age);
}
