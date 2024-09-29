//	 6. Write a function that checks if a username and
// password match predefined values. If the username is
// "admin" and the password is "1234", print "Login
// successful"; otherwise, print "Login failed.
#include <stdio.h>
#include <string.h>
 int main(){
 	char u[]="" ;
 	int p;
 	printf("enter your username :");
 	scanf("%s",&u);
 	printf("enter your password :");
 	scanf("%d",&p);
 	if(strcmp(u,"admin")==0 && p == 1234){
 		printf("login successful.");
	 }else{
	 	printf("login failed.");
	 }
	return 0;
}
