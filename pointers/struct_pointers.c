#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int year;
  int month;
  int day;
} date;


int main() {
    date *today;
    today = (date*)malloc(sizeof(date));
    (*today).day = 4;
    (*today).month = 7;
    (*today).year = 1996;

    today->day = 4;
    today->month = 7;
    today->year= 1996;

    printf("the date is %d/%d/%d\n", today->day, today->month, today->year);
    free(today);


    date *weekDays;
    weekDays = (date*)malloc(sizeof(date) * 7);
    int i;
    for (i = 0; i < 7; i++) {
        date day = {
            i,
            1,
            1996
        };
        weekDays[i] = day;
    }
    for (i = 0; i < 7; i++) {
        date today =  weekDays[i];
        today.day = 5;
        printf("the date is %d/%d/%d\n", today.day, today.month, today.year);
    }
    
    free(weekDays);
    return 0;
}