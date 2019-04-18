#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{int n,i,j;
scanf("%d",&n);
for (int i = 1; i <= n; i++) {
  for (int j = n; j > i; j--) {
    printf(" ");                        // to printspaced 
  }
  for (int j = 1; j <= i; j++) {
    printf("#");                   //then it prints one by one 
  }
  printf("\n");
}

 return 0;
}
