//37. Given a sorted array and a target value,
// return the starting and ending position of
// that target in the array.Example:Input: [5,
// 7, 7, 8, 8, 10], target=8 ,Output: [3, 4]
 #include <stdio.h>

int main(){
	int arr[]={5,7,7,8,8,10};
	int len1 = sizeof(arr)/sizeof(arr[0]);
	int first=0;
	int last=0;
	int target;
	printf("enter a targeted value : ");
	scanf("%d",&target);
	int i;
	for(i=0;i<len1;i++){
		if(arr[i]==target){
			if(first==0){
			    first = i;
			}
			last = i;
		}
		
			
		
	}
int ans[]={};
ans[0]=first;
ans[1]=last;
int k;
for(k=0;k<2;k++){
	printf("%d\n",ans[k]);
}
return 0;
}