#include <stdio.h>


int main(){

    int age = 34;
    int *pAge;
    pAge = &age;
    int curVal = pAge;
    printf("Age: %d\n", age);
    printf("pAge: %p\n", pAge);
    printf("*pAge: %d\n", *pAge);

    // Change the value of age using the pointer
    *pAge = 35;
    printf("Age: %d\n", age);
    printf("pAge: %p\n", pAge);
    printf("*pAge: %d\n", *pAge);

    return 0;
}