//7. Write a function that simulates a traffic light system. The
// function should take the current light color (red, yellow,
// green) as input and print the corresponding action:
// ? "red" ? "Stop"
// ? "yellow" ? "Slow down"
// ? "green" ? "Go"
 #include <stdio.h>
#include <string.h>

int main() {
    char r[] = "red";
    char y[] = "yellow";
    char g[] = "green";
    char l[20]; // Allocate enough space for the input

    printf("Enter a light color: ");
    scanf("%s", l);

    if (strcmp(r, l) == 0) {
        printf("Stop the car.\n");
    } else if (strcmp(y, l) == 0) {
        printf("Slow down the car.\n");
    } else if (strcmp(g, l) == 0) {
        printf("Go ahead.\n");
    } else {
        printf("Your color is not according to signal color.\n");
    }

    return 0;
}

