// 20. Find and print the difference between the maximum
// and minimum elements in arr = [80, 30, 70, 50,


#include <stdio.h>
int main() {
	int arr[]={80, 30, 70, 50,20};
	int max =arr[0];
	int min =arr[0];
	int len = sizeof(arr)/sizeof(arr[0]);
	int i;
	for(i=0;i<len;i++){
		if(max<arr[i]){
			max = arr[i];
		}
		if(min>arr[i]){
			min = arr[i];
		}
	}
	int ans = max-min;
		printf("the maximum and minimum differnce of this array %d ",ans);
	 return 0;
}
