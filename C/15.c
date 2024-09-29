// 15. Remove the Last element Input: nums = [1, 2,
// 3, 4,5]; Output: nums = [1,2,3,4]
 #include <stdio.h>
int main() {
	int arr[] = {1,2,3,4,5};
	int arr2[] = {};
	int i;
	int len = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<len-1;i++){
		arr2[i]=arr[i];
		}
	int k;
	for(k=0;k<len-1;k++){
		printf("%d\n",arr2[k]);
	}
	
	 return 0;
}
