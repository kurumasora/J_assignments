#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  printf("あなたの運勢を占います¥n");
  srand((unsigned)time(NULL));
  int fortune = rand() % 4 + 1;

  switch (fortune) {
    case 1:
      printf("大吉¥n");
      /* ここにbreak;を入れ忘れている */
    case 2:
      printf("中吉¥n");
      break;
    case 3:
      printf("吉¥n");
      break;
    default:
      printf("凶¥n");
  }
  return 0;
}
