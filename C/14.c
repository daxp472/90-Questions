// 14. Add Element to the Beginning of an Array Example:
// Input: nums = [1, 2, 3, 4]; Output: nums =
// [0,1,2,3,4].
 #include <stdio.h>
int main() {
	int arr[] ={1,2,3,4};
	int len = sizeof(arr)/sizeof(arr[0]);//4
	int i;
	for(i=len;i>0;i--){
		arr[i]=arr[i-1];
	}
	arr[0]=0;
	len++;
	int k;
	for(k=0;k<len;k++){
		printf("%d\n",arr[k]);
	}
	 return 0;
}
