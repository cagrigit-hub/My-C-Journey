#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int year;
  int month;
  int day;
} date;

void printArr(date*, int);

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

    date todayX;
    todayX.day = 4;
    todayX.month =5;
    todayX.year = 1999;

    printf("the date is %d/%d/%d\n", today->day, today->month, today->year);

    date weekArr[2]= {
        {
            1,1,1996
        },
         {
            1,1,2000
         }
    };
    printArr(weekArr,2);
    printf("------------------------\n");

    date *weekDays;
    weekDays = (date*)malloc(sizeof(date) * 7);
    int i;
    for (i = 0; i < 7; i++) {
        weekDays[i].day = 4;
    }
    for (i = 0; i < 7; i++) {
        date today =  weekDays[i];
        today.day = 5;
        printf("the date is %d/%d/%d\n", today.day, today.month, today.year);
    }
    
    free(weekDays);
    return 0;
}


void printArr(date* arr, int size) {
    int i;
    for (i = 0 ; i< size; i++) {
        date today = arr[i];
        printf("the date is %d/%d/%d\n", today.day, today.month, today.year);
    }
}