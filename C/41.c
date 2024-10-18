// 41. Given a valid IP address, you are asked to return a
// defanged version of that IP address. A defanged IP
// address replaces every period "." with "[.]".
// Example1:Input: address = "1.1.1.1" Output: "1[.]1[.]1[.]1"
 #include <stdio.h>
 #include <string.h>

int main(){
	char ipa[16];
	char nipa[22];
	int a=0;
	printf("enter your ip address : ");
	scanf("%s",&ipa);
	int i;
	for(i=0;i<strlen(ipa);i++){
		if(ipa[i]=='.'){
			nipa[a++]='[';
			nipa[a++]='.';
			nipa[a++]=']';
		}else{
			nipa[a++]=ipa[i];
		}
	}
	printf("%s",nipa);
	return 0;
}