// 42. Given two lists of events. Each event is represented by
// a start time and an end time. You need to determine if the
// two events conflict, which means if the events overlap in
// time.
// Input Format:
// ? Each event is represented by a list [start, end],
// where start is the start time (inclusive) and end is
// the end time (exclusive).
// ? The events are represented as two arrays: event1
// and event2.
// Output:
// ? Return true if there is a conflict between the two
// events; otherwise, return false.
//Example 1: Input: event1 = [1, 5], event2 = [5, 10]
// Output: false, Exampe 2: Input: event1 = [1, 5], event2 =
// [2, 3] Output: true.
 #include <stdio.h>
 #include <string.h>

int main(){
	int e1[2];
	int e2[2];
	int a,b,c,d;
	int count=0;
	printf("give a time acording 1 to 24.\n");
	printf("enter a first event starting time : ");
	scanf("%d",&a);
	printf("enter a first event ending time : ");
	scanf("%d",&b);
	printf("enter a second event starting time : ");
	scanf("%d",&c);
	printf("enter a second event ending time : ");
	scanf("%d",&d);
	e1[0]=a;
	e1[1]=b;
	e2[0]=c;
	e2[1]=d;
	if(a,b,c,d<=24 && a,b,c,d>0){
	int i,j;
	for(i=e1[0];i<=e1[1];i++){
		for(j=e2[0]+1;j<e2[1];j++){
			if(i==j){
				count++;
			}
		}
	}
	if(count>0){
		printf("true");
	}else{
		printf("false");
	}
}else{
	printf("your time is not valid");
}
	return 0;
}