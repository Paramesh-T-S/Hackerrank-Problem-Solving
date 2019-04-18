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
{
int n,i,j,a[100][100],b=0,c=0;
scanf("%d",&n);
for(i=0;i<n;i++){
for(j=0;j<n;j++){

    scanf("%d",&a[i][j]);
}}
for(i=0;i<n;i++){
b= b+ a[i][i];
}

for(i=0;i<n;i++){
    for(j=0;j<n;j++){
if ((i + j) == (n - 1))
  c= c + a[i][j];
}
}

printf("%d",abs(b-c));
    return 0;
}
