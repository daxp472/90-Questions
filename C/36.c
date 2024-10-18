// 36. Print a pyramid pattern with n rows

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

  
    int i,j;
   for(i=1;i<=n;i++){
   	for(j=i;j<=i;j++){
   		  printf("*");
	   }
	   printf("\n");
   }
    return 0;
}