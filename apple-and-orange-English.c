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
   long long int s,t,a,b,m,n,i,app[1000000],or[1000000],e=0,c=0;     //app -apple ,or -orange
    scanf("%lld %lld\n",&s,&t);                               
    scanf("%lld %lld\n",&a, &b); 
    scanf("%lld %lld\n",&m, &n);
for(i=0;i<m;i++){
scanf(" %lld",&app[i]);
int temp = a+app[i];
if (temp >= s && temp <= t) {
  e = e + 1;
    }}
 for (i = 0; i < n; i++) {
      scanf(" %lld", &or[i]);
      int temp = b + or[i];
      if (temp >= s && temp <= t) {
        c = c + 1;
    }}

/*for(i=0;i<m;i++){
oapp[i]=a+app[i];
}
for (i = 0;i<n;i++) {
  oor[i] = b+or[i];
}

 for (i = 0; i < m; i++) {
          printf(" %d",oapp[i]);
        }printf("\n");

 for (i = 0; i < n; i++) {
          printf(" %d",oor[i]);
        }
    
for(i=0;i<n;i++){
if(temp>=s && temp<=t) {
    e=e+1;                    //e -no. of apples falls on sam house 
} if (oor[i]>=s && oor[i]<=t) {
    c=c+1;                    //c -no. of oranges falls on sam house 
}
}*/
printf("%lld\n%lld",e,c);
return 0;
}
