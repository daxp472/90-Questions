// 49. Given an array and two indices, swap
// the elements at those indices.
// ? Input: arr = [1, 2, 3, 4], i = 1, j = 3
// ? Output: [1, 4, 3, 2]
   #include <stdio.h>


int main(){
	int arr[]={1,2,3,4};
	int len = sizeof(arr)/sizeof(arr[0]);
	int a,b;
	printf("firat index : ");
	scanf("%d",&a);
	printf("second index : ");
	scanf("%d",&b);
	arr[a]=arr[a]+arr[b];
	arr[b]=arr[a]-arr[b];
	arr[a]=arr[a]-arr[b];
	int k;
	for(k=0;k<len;k++){
		printf("%d\t",arr[k]);
	}
	return 0;
}