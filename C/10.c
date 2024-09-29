//10. Given an array of integers, count how many numbers are even and how many are odd.
//Example
//Input: [1, 2, 3, 4, 5]
//Output: Even: 2, Odd: 3
#include <stdio.h>
int main() {
int arr[] = {1,2,3,4,5};
int length = sizeof(arr)/sizeof(arr[0]);
int even =0;
int odd=0;
int i;
for(i=0;i<length;i++){
	if(arr[i]%2==0){
		even += 1;
	}else{
		odd += 1;
	}
}
printf("in this arr %d is even",even);
printf("in this arr %d\n is odd",odd);


    return 0;
}
