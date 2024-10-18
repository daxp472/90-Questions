//46. Given a string, return the index of the
// first repeating character. If no character
// repeats, return-1.
// ? Input: "hello"
// ? Output: 2 (because 'l' repeats first)
// ? Input: "abcdef"
// ? Output:-1
#include <stdio.h>
#include <stdio.h>


int main(){
	char str[100];
	printf("type your string : ");
	scanf("%s",&str);
	int i,j;
	int first=-1;
	for(i=0;i<strlen(str);i++){
		for(j=i+1;j<strlen(str);j++){
			if(str[i]==str[j]){
				first = i;
				break;
			}
		}
		if(first!=-1){
			break;
		}
	}
	printf("%d",first);
	return 0;
} 