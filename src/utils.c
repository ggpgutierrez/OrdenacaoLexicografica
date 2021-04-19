#include <stdio.h>
#include "../headers/utils.h"

void printArray(char* arr[], int n)
{
    int i;
    for (i = 0; i < n; i++){
        printf("%d-", (i+1));
        printf("%s ", arr[i]);
    }
        
        
    printf("\n");
}

int compare(char *p, char *q){
  int i = 0;
  while(1) {
    if(p[i] == '\0' || p[i] > q[i])
    return 1;
    else if (q[i] == '\0' || p[i] < q[i])
      return -1;
    ++i;
  }
  return 0;  // else p == q
}