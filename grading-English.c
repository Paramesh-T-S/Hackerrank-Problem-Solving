#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i,g[100000],temp[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
scanf("%d\n",&g[i]);
    }
    // Logic starts
    for(i=0;i<n;i++){                             

if((g[i]>=38) && ((g[i]%5)>2)) {

temp[i] = g[i] + (5 -(g[i] % 5));
    }
    else{
        temp[i]=g[i];
    }
    }
    //logic ends
    for(i=0;i<n;i++){
printf("%d\n",temp[i]);
    }
return 0;
}
