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
    int n,a[100000],i,max,b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
scanf("%d",&a[i]);
    }

    max = a[0];

for(i=0;i<n;i++){
if(a[i]>max){
max=a[i];
}
    }

for(i=0;i<n;i++){
if(max==a[i]){
b++;
}
    }
    printf("%d", b);
    return 0;
}
