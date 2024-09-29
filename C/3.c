// 3. Write a function that takes three sides of a triangle and
// checks whether the triangle is equilateral, isosceles, or
// scalene
#include <stdio.h>

int main(){
	int a;
	int b;
	int c;
	printf("enter first trianglr side :");
	scanf("%d",&a);
	printf("enter second trianglr side :");
	scanf("%d",&b);
	printf("enter third trianglr side :");
	scanf("%d",&c);
	if (a <= 0 || b <= 0 || c <= 0) {
        printf("Sides must be positive numbers.");
        return;
    }

    if (a == b && b == c) {
        printf("This triangle is equilateral.");
    } else if (a == b || b == c||a == c) {
        printf("This triangle is isosceles.");
    } else {
        printf("This triangle is scalene.");
    }
	
	return 0;
}
