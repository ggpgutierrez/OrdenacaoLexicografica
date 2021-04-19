#include <stdio.h>
#include "headers/sorts.h"
#include "headers/file.h"
#include "headers/utils.h"
#include "headers/write.h"

#define DIM 10000

void copiar(char **copiado, char **original)
{
  int count;

  for(count = 0; count < DIM; count++)
    copiado[count] = original[count];
}

int main(void){
  char* data[DIM];
  char* data2[DIM];

  fileOpen(data);
  copiar(data2, data);

  insertionSort(data);
  driverCodeMergeSort(data2, DIM);

  writeFile("OUT/out1.txt", data, DIM);
  writeFile("OUT/out2.txt", data2, DIM);
  
  return 0;
}
