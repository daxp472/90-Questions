// 48.Given a string, return a new string with
// all vowels removed.
// ? Input: "hello"
// ? Output: "hll"

int main(){
	char str[100];
	char ans[100];
	int k =0;
	printf("type your string : ");
	scanf("%s",&str);
	int i;
	for(i=0;i<strlen(str);i++){
		if(!(str[i]=='a' || str[i] == 'A' || str[i]=='e' || str[i] == 'E' || str[i]=='i' || str[i] == 'I' || str[i]=='o' || str[i] == 'O' || str[i]=='u' || str[i] == 'U')){
			ans[k++]=str[i];
		}
	}
	printf("%s",ans);
	return 0;
} 