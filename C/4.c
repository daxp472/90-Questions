// 4. Write a function to check whether a given character is a
// vowel or consonant#include <stdio.h>
#include <stdio.h>
int main(){
	char a;
	printf("enter your character :");
	scanf("%c",&a);
	if(a=='a' || a=='e' || a=='i' || a=='o' ||a=='u' || a=='A' || a=='E' || a=='I' || a=='O' ||a=='U'){
		printf("this is vowel");
	}else{
		printf("this is not vowel");
	}
	
	return 0;
}
