// 5. Write a function that checks if a person is eligible to
// vote. The person is eligible if they are 18 years old or
// older
#include <stdio.h>
int main(){
	int a;
	printf("enter your agr : ");
	scanf("%d",&a);
	if(a>=18){
		printf("you are eligible to vote.");
	}else{
		printf("you are not18 eligible to vote.");
	}
	
	return 0;
}
