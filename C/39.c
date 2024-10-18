// 39. Given a string, check if all brackets
// are closed properly. Example:Input: "{[()]}"
// Output: true
 #include <stdio.h>
#include <string.h>

int main(){
	char str[]="{[()]}";
	int len = strlen(str);
	float lan = strlen(str);
	int count =0;
	char one='[';
	char two=']';
	char three='{';
	char four='}';
	char five='(';
	char six=')';
	int i;
	for(i=0;i<len;i++){
		if(str[i]==one){
			if(str[len-1-i]==two){
				count++;
			}
		}
		if(str[i]==three){
			if(str[len-1-i]==four){
				count++;
			}
		}
		if(str[i]==five){
			if(str[len-1-i]==six){
				count++;
			}
		}
		
	}
	if(count == lan/2){
		printf("true");
	}else{
		printf("false");
	}
	return 0;
}