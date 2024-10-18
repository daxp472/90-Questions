
//25. Write a program to split a string into
// an array of words.
 #include <stdio.h>
#include <string.h>
int main(){
	char str[10]="";
	char arr[10];
	printf("enter your string : ");
	scanf("%s",&str);
	int len = strlen(str);
	int i;
	for(i=0;i<len;i++){
		arr[i] = str[i];
	}

	for(i=0;i<len;i++){
		printf("%c\n",arr[i]);
	}
	
	return 0;
}
