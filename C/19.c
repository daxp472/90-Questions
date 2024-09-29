//19. Check if the array arr = [1, 2, 3, 4, 5] is
// sorted in ascending order, and print true or false.
#include <stdio.h>
int main() {
	int arr[]={1, 2, 3, 4, 5};
	int len = sizeof(arr)/sizeof(arr[0]);
	int ans =0;
	int i,j;
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(arr[i]>arr[j]){
				ans +=1;
				break;
			}
		}
	}
	if(ans>0){
		printf("false");
	}else{
		printf("true");
	}
	 return 0;
}
