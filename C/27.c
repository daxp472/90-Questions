//27. Write a program to extract the file
// extension from a given filename.Example:
// Input: "document.pdf", Output: "pdf".
 #include <stdio.h>
#include <string.h>
int main(){
	char str[100]="";
	printf("write a file name : ");
	scanf("%s",&str);
	char *ans = strrchr(str,'.');
	if(ans != NULL){
		printf("%s",ans);
	}else{
		printf("you not give any exention.");
	}
	

	
	return 0;
}