//16. Check if all the elements in arr = [3, 5, 9, 1,
// 7] are positive numbers, and print true or false
 #include <stdio.h>
int main() {
	int arr[]={3, 5, 9, 1,7};
	int len = sizeof(arr)/sizeof(arr[0]);
	int ans = 0;
	int i;
	for(i=0;i<len;i++){
		if(arr[i]<0){
			ans -= 1;
		}
		}
		if(ans==0){
			printf("true");
		}else{
			printf("false");
		}
	
	
	 return 0;
}
