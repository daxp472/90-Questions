// 24. Write a program to remove whitespace
// from both ends of a string.Example: Input:
// " hello ", Output: "hello".
 #include <stdio.h>
#include <string.h>
int main(){
	
	char str1[100]="  hello  ";
	char str2[100]="";
	int len = strlen(str1);
	int i;
	for(i=0;i<len;i++){
		if(str[i]== ' '){
			break;
		}else{
			strxfrm(str[i]);
			strcat(str2,str1[i]);
		}
	}
	printf("%d",str2);
	return 0;
}
