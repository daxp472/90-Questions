// 23. Write a program to concatenate two
// given strings. Example: Input: ("hello", "
// world"), Output: "hello world".


#include <stdio.h>
#include <string.h>
int main(){
	
	char str1[100]="";
	char str2[100]="";
	printf("give your first string :");
	scanf("%s",&str1);
	printf("give your second string :");
	scanf("%s",&str2);
	strcat(str1,str2);
	printf("%s",str1);
	
	return 0;
}
