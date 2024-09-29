// 9. Sort an Array in Ascending Order Example: Input:
// nums = [4,2,8,5,1]; Output: nums =
// [1,2,4,5,8].

 #include <stdio.h>
int main(){
	int arr[] = {4,2,8,5,1};
	int len = sizeof(arr)/sizeof(arr[0]);
	int i,j;
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(arr[i]>arr[j]){
				arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];  
			}
		}
	}
	int k;
	for(k=0;k<len;k++){
		printf("%d\n",arr[k]);
	}
	return 0;
}
