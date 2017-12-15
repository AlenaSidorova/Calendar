#include <stdio.h>

int main()
{
  int day, month, year, a, y, m, result;
  
  scanf("%d%d%d", &day, &month, &year);
  a = (14-month)/12;
  y = year - a;
  m = month + 12 * a - 2;
  result = (7000 + (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12)) % 7;
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
