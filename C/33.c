// 33. Write a program that takes a year as
// input and checks whether it is a century
// year (a year divisible by 100).
  #include <stdio.h>
 int main(){
	int y;
	printf("enter a year : ");
	scanf("%d",&y);
	if(y%100 == 0){
		printf("yes it is centuary year.");
	}else{
		printf("no it is not a centuary year.");
	}
	return 0;
}