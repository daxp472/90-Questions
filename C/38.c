#include<stdio.h>

int main(){
	int c;
	printf("enter a celsius value : ");
	scanf("%d",&c);
	int f = (c*9/5 )+  32;
	printf("%d",f);
	return 0;
}