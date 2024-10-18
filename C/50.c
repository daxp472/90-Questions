//50. Given a string and a character,
// count how many times the character
// appears in the string.
// ? Input: str = "hello world", char = "o"
// ? Output: 2

  #include <stdio.h>


int main(){
	char str[100];
	char x;
	int count=0;
	printf("type a string : ");
	scanf("%s",&str);
	printf("type a character : ");
	scanf(" %c",&x);
	int i;
	for(i=0;i<strlen(str);i++){
		if(str[i]==x){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}