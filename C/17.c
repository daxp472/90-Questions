//17. Count how many positive and negative numbers are in
// arr = [1,-2, 3,-4, 5,-6]andprint theresult
#include <stdio.h>
int main() {
	int arr[]={1,-2, 3,-4, 5,-6};
	int len = sizeof(arr)/sizeof(arr[0]);
	int p = 0;
	int n =0;
	int i;
	for(i=0;i<len;i++){
		if(arr[i]>0){
			p +=1;
		}
		if(arr[i]<0){
			n +=1;
		}
	}
	printf(" there is %d positive.\n",p);
	printf(" there is %d nagative",n);
	 return 0;
}
