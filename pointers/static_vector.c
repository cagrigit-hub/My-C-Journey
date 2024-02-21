#include <stdio.h>
#include <stdlib.h>



int main(){
    int *vec;
    int size = 10;
    vec = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++){
        vec[i] = i;
    }
     printf("vec[2]=%d\n", *(vec+2));
    free(vec);
    return 0;
}