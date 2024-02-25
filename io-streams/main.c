#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

  FILE *fp;
  char buffer[512];
  double tempC, tempF;
  double sumC = 0.0;
  double sumF = 0.0;
  int numread = 0;

  fp = fopen("outfile.txt", "r");
  if (fp == NULL) {
    printf("there was an error opening outfile.txt\n");
    return 1;
  }
  else {
    // read in the header line first
    fgets(buffer, 256, fp);

    fgets(buffer + strlen(buffer), sizeof(buffer) - strlen(buffer), fp);

    printf("%.*s\n", 256, buffer);
    while (!feof(fp)) {
      fscanf(fp, "%lf %lf\n", &tempC, &tempF);
      printf("tempC=%.2f, tempF=%.2f\n", tempC, tempF);
      sumC += tempC;
      sumF += tempF;
      numread++;
    }
    fclose(fp);
    printf("%d values read, sumC=%.2f and sumF=%.2f\n", numread, sumC, sumF);
  }

  return 0;
}