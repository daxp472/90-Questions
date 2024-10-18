//52.Given an array nums, the running sum of
//an array is defined as runningSum[i] =
//sum(nums[0]…nums[i]).
//Example:
//? Input: nums = [1, 2, 3, 4]
//? Output: [1, 3, 6, 10]

  #include <stdio.h>


int main(){
	int nums[]={1,2,3,4};
	int sum = 0;
	int len = sizeof(nums)/sizeof(nums[0]);
	int i;
	for(i=0;i<len;i++){
		sum += nums[i];
		nums[i]=sum;
	}
	int k;
	for(k=0;k<len;k++){
		printf("%d\t",nums[k]);
	}

		return 0;
}