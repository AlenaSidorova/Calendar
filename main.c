#include <stdio.h>

int main()
{
  int day, month, year, b, x, n, result;
  
  scanf("%d%d%d", &day, &month, &year);
  b = (14-month)/12;
  x = year - b;
  n = month + 12 * b - 2;
  result = (7000 + (day + x + x / 4 - x / 100 + x / 400 + (31 * n) / 12)) % 7;
  printf("%d.%d.%d was ", day, month, year);
  switch (result)
	{
    case 1:
      printf("Monday\n");
      break;
    case 2:
      printf("Tuesday\n");
      break;
    case 3:
      printf("Wednesday\n");
      break;
    case 4:
      printf("Thursday\n");
      break;
    case 5:
      printf("Friday\n");
      break;
    case 6:
      printf("Saturday\n");
      break;
    case 0:
      printf("Sunday\n");
      break;
  }
  return 0;
}
