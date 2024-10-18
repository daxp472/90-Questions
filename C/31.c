// 31. Write a program to repeat a string a specified number of
// times.Example: Input: ("hello", 3), Output:
// "hellohellohello".


 int main(){
	char str[100]="";
	char ans[100]="";
	int a;
	printf("enter your string :");
	scanf("%s",&str);
	printf("how many times you copy a string : ");
	scanf("%d",&a);
	int i;
	for(i=1;i<=a;i++){
	strcat(ans, str);
	}
	printf("%s",ans);
	return 0;
}