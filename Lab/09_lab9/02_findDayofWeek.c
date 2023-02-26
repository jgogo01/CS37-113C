#include <stdio.h>
#include <math.h>

typedef enum {SAT = 0, SUN, MON, TUE, WED, THU, FRI} DayOfWeek;

// Zeller's congruence Ref https://datagenetics.com/blog/november12019/index.html
DayOfWeek findDayOfWeek(int day, int month) {
  int year = 2013;
  if(month < 3){
    month += 12;
    year -= 1;
  }
  int x = day + (2.6)*(month+1) + year + (year/4) - (year/100) + (year/400);
  return x%7;
}

int main()
{
	int day, month;
	DayOfWeek dow;

	printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
	printf("Enter Day and Month: ");
	scanf("%d %d", &day, &month);
	dow = findDayOfWeek(day, month);
	printf("Day:%d Month:%d of Year 2013 is ", day, month);
	switch(dow){
    case SUN : printf("Sunday.\n"); break;
    case MON : printf("Monday.\n"); break;
    case TUE : printf("Tuesday.\n"); break;
    case WED : printf("Wednesday.\n"); break;
    case THU : printf("Thursday.\n"); break;
    case FRI : printf("Friday.\n"); break;
    case SAT : printf("Saturday.\n"); break;
	}
}