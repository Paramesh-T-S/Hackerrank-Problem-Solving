#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{    int a[10000],sum=0,i,n;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        //sum+=a[i];
    }for(i=0;i<n;i++){
                sum+=a[i];
    }
              printf("%d",sum);
    return 0;
    
}