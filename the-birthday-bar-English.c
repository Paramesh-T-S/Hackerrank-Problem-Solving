#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,s[100000],d,m,i,count=0,b=0,c;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
scanf("%d",&s[i]);
    }
scanf("%d %d",&d,&m);
/*for(i=0;i<n;i++){
   count=s[i]+s[i+1];

    
    if(count==d){
b++;
    }
}*/
for (i = 0; i <= n - m; i++) {
  int sum = 0;
  for (int j = i; j < m + i; j++) {
    sum = sum + s[j];
  }
  if (sum == d)
    c++;
}
printf("%d", c);

return 0;
}
