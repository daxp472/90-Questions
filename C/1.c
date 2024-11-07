// 1.Write a function to check the grade of a student based on the score:
// 90-100: A
// 80-89: B
// 70-79: C
// 60-69: D
// Below 60: F
#include <stdio.h>

int main() {
    int marks;
    printf("enter your marks between 1 to 100 :");
    scanf("%d",&marks);
    if(marks<=100 && marks>=0){
       if(marks>=90){
        printf("your grade is A");
    }else if(marks>=80 && marks<90){
        printf("your grade is B");
    }else if(marks>=70 && marks<80){
        printf("your grade is C");
    }else if(marks>=60 && marks<70){
        printf("your grade is D");
    }else{
        printf("your grade is F");
    }
    }else{
        printf("your marks is not dev please change it.");
    }

    return 0;
}
