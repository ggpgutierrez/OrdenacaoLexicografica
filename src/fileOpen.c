#include <stdio.h>
#include <stdlib.h>
#include "../headers/file.h"
#include "../headers/utils.h"
#include "../headers/sorts.h"
#define FILENAME "IN.txt"


void fileOpen(char **data){
  
  // Open File
  const char fname[] = "IN.txt";

  FILE *fp = fopen(fname, "r");

  if( !fp ){
    printf("Error open file");
  }
  printf("Opened file: %s\n", fname); 

  // Count Lines
  char cr;
  size_t lines = 0;

  while( cr != EOF ) {
    if ( cr == '\n' ) {
      lines++;
    }
    cr = getc(fp);
  }
  printf("Number of lines: %ld\n", lines); 
  rewind(fp);
  
    size_t n;

    for (size_t i = 0; i < lines; i++) {
      data[i] = NULL;
      size_t n = 0;

      getline(&data[i], &n, fp);

    if ( ferror( fp ) ){
        printf("error");
    }
    }

  // Close File
  fclose(fp);
}

