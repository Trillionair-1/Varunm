#include <stdio.h>

int main() {
    int num1, num2;
    int cube1, cube2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the cubes
    cube1 = num1 * num1 * num1;
    cube2 = num2 * num2 * num2;

    // Display the results
    printf("The cube of %d is %d\n", num1, cube1);
    printf("The cube of %d is %d\n", num2, cube2);

    return 0;
}

