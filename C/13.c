// 13. Check if the array arr = [1, 2, 3, 4, 5] contains the number 3 and print true or false.
#include <stdio.h>
int main() {
	int arr[] = {1, 2,3, 4, 5} ;
	int len = sizeof(arr)/sizeof(arr[0]);
	int ans =0;
	int i;
	for(i=0;i<len;i++){
	    if(arr[i]==3){
	        ans = 1;
	    }
	}
	if(ans==1){
	    printf("true");
	}else{
	    printf("false");
	}
	 return 0;
}

