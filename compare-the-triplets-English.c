#include <stdio.h>


int main()
{
    int a[100],b[100],i,k=0,j=0;
    for(i=0;i<=2;i++){
        scanf("%d\t",&a[i]);
    }
    for(i=0;i<=2;i++){
        scanf("%d\t",&b[i]);
    }
    for (i = 0; i <= 2; i++) {
      if (a[i] > b[i]) {
        k++;
      }

      if (a[i] < b[i]) {
        j++;
      }
        }
        printf("%d %d", k, j);
}
