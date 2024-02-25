#include <stdio.h>


typedef union {
    int a;
    char b;
} my_union;

int main()
{
    my_union var;
    var.a = 65;

    printf("a = %d\n", var.a);
    printf("b = %c\n", var.b);
    int* p;
    int *c;
    return 0;
}


