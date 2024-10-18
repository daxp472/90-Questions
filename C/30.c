int main(){
	
	int n,digit;
	int esum,osum =0;
	printf("enter your number :");
	scanf("%d",&n);
	int length = 0;
	while(n!=0){
		digit = n%10;
		n /=10;
		if(digit%2 == 0 ){
			esum += digit;
		}else{
			osum += digit;
		}
	}
	printf("even sum is %d\n",esum);
	printf("odd sum is %d",osum);
	return 0;
}