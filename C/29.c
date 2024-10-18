// 29.Write a program to find all pairs in an
// array whose sum is equal to a given number.
//Example 1: Input: nums = [2,7,11,15], target = 9 , Output:
// [0,1].



int main(){
	
	int arr[]={2,7,11,15};
	int len = sizeof(arr)/sizeof(arr[0]);
	int target;
	int found=0;
	int ans[10];
	printf("enter your target : ");
	scanf("%d",&target);
	int i,j;
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(arr[i] + arr[j] == target){
			   printf("Output: [%d, %d]\n", i, j);
			   found++;
			}
		}
	}
	if(found==0){
		printf("pairs not found");
	}
	return 0;
}