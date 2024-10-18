//. Write a function that takes two numbers
// and prints the largest one
 #include <stdio.h>

int main(){
	int a;
	int b;
	printf("give a first number : ");
	scanf("%d",&a);
	printf("give a second number : ");
	scanf("%d",&b);
	if(a>b){
		printf("%d",a);
	}else{
		printf("%d",b);
	}
	
	
	return 0;
}