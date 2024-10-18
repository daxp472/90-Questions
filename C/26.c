// 26. Write a program to check if a string
// ends with a specific character.Example:
// Input: ("codinggita", "a"), Output: true.

#include <stdio.h>
#include <string.h>
int main(){
	
	char str[20]="";
	char c;
	printf("enter your string : ");
	scanf("%s",&str);
	printf("enter your character : ");
	scanf("%c",&c);
	int len = strlen(str);
	if(str[len-1]== c){
		printf("true");
	}else{
		printf("false");
	}
	
	return 0;
}