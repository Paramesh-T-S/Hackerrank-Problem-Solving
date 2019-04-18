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

int n,i,a[200],b=0,c=0,d=0;
float tb,tc,td;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
if(a[i]>0){
b=b+1;
}
else if(a[i]<0)
{
c = c+1; 
}
else {
d =d+1;
}

}
tb = b/(float)n;
tc = c/(float)n;
td = d/(float)n;
printf("%.5f\n%.5f\n%.5f",tb,tc,td);
return 0;
}
