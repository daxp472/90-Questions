// 40. Given two numbers, generate an array
// containing all numbers between them
//(inclusive). Example: Input: 1,5 Output: [1,
// 2, 3, 4, 5]
 #include <stdio.h>


int main(){
	int num1,num2;
	printf("give your starting number : ");
	scanf("%d",&num1);
	printf("give your ending number : ");
	scanf("%d",&num2);
	int size = num2-num1+1;
	int arr[size];
	int i;
	for(i=0;i<size;i++){
		arr[i]=num1+i;
	}
	int k;
	for(k=0;k<size;k++){
		printf("%d\t",arr[k]);
	}
	return 0;
}