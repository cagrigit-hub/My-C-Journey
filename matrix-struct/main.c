#include <stdio.h>

#define MAXDATA 1024

typedef struct {
  double data[MAXDATA];
  int nrows;
  int ncols;
} Matrix;

void printmat(Matrix M);
Matrix matrixmult(Matrix A, Matrix B);

int main(int argc, char *argv[])
{
  Matrix A = { {1.2, 2.3,
                3.4, 4.5,
                5.6, 6.7},
               3,
               2};
  Matrix B = { {5.5, 6.6, 7.7,
                1.2, 2.1, 3.3},
               2,
               3}; 
  printmat(A);
  printmat(B);

  //  Matrix C = matrixmult(A, B);
  //  printmat(C);

  return 0;
}

// [[1,2], [3,4], [5,6]] -> [1,2,3,4,5,6]
// ncols = 3 nrows = 2 
void printmat(Matrix M)
{
    int i,j;
    printf("\n");
    for(i = 0; i < M.nrows; i++) {
        for(j = 0; j < M.ncols; j++) {
            printf("%f", M.data[i*M.ncols + j]);    
        }
    }

}

Matrix matrixmult(Matrix A, Matrix B)
{
  // fill in the code here
  printf("so far matrixmult does nothing\n");
  Matrix C;
  return C;
}
