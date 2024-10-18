// 47. Given an array of integers, find the
// first element that repeats. If no element
// repeats, return-1.
// ? Input: [10, 5, 3, 4, 3, 5, 6]
// ? Output: 5
  #include <stdio.h>


int main(){
	int arr[]={10,5,3,4,3,5,6};
	int len = sizeof(arr)/sizeof(arr[0]);
	int frep = -1;
	int i,j;
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(arr[i]==arr[j]){
				frep = arr[i];
				break;
			}
		}
		if(frep != -1){
			break;
		}
	}
	printf("%d",frep);
	return 0;
}