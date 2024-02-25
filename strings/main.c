#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  int size;

  int x = 8765309;
  size = snprintf(NULL, 0, "%d", x);
  char *xc = malloc(size + 1);
  sprintf(xc, "%d", x);

  double y = 876.5309;
  size = snprintf(NULL, 0, "%.4f", y);
  char *yc = malloc(size + 1);
  sprintf(yc, "%.4f", y);

  printf("xc = %s\n", xc);
  printf("yc = %s\n", yc);

  free(xc);
  free(yc);

  return 0;
}