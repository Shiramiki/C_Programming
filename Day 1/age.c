#include <stdio.h>

int main() {
    /*
        This program allows the user to input their age, then outputs whether or not they are an adult.
    */
    int age;

    printf("Please enter your age: ");
    scanf("%d", &age);

    if (age < 18) {
        printf("You are a minor\n");
    } else {
        printf("You are an adult\n");
    }

    return 0;   // Return 0 to indicate successful completion
}
