#include <stdio.h>
#include "../headers/write.h"

int writeFile(char* path, char **data, int n){
  int i;
  FILE *fp;
  fp = fopen(path, "wt");

  if(fp == NULL) return 1;

  for(i=0; i < n; i++){
    fputs(data[i], fp);
  }
  fclose(fp);
  return 0;
}