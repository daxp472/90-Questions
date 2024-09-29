// 8. Find the Average of an Array.
 #include <stdio.h>
int main(){
	int arr[] ={1,2,3,5};
	int lan = sizeof(arr)/sizeof(arr[0]);
	float sum =0;
	int i;
	float ans;
	for(i=0;i<lan;i++){
		sum += arr[i];
		ans = sum/lan;
	}

	printf("%.2f",ans);
	return 0;
}
