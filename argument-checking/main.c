#include <stdio.h>

void function_call(int i, float f)
{
  printf("%d\n", i * f);
}

main()
{
  double d = 20;
  float f = 10;
  function_call(d, f);
    return 0;
}
