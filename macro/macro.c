#include <stdio.h>
#define SQUARE(n) n*n
#define MAX(a,b) ( (a > b) ? (a) : (b) )
#define IS_LOWER_CASE(x) ( ((x) >= 'a') && ((x) <= 'z') )
int main()
{
  int x = 3;
  int y = SQUARE(x);
  printf("%d",y);
  int maxNumber = MAX(4,5);
  printf("The maximum number is %d", maxNumber);
  int answer= IS_LOWER_CASE('b');
  //the condition will either evaluate to 1(TRUE) or 0(FALSE) 
  printf("%d",answer); 
  return 0;
  
}