#include <stdio.h>

int main() {
    //This program uses a switch to output the choice the user has input
    int choice;

    printf("Please enter your Choice");
    scanf("%d", &choice);
    
    switch(choice){
        case 1: 
            printf("You have selected choice 1");
            break;
        case 2:
        case 3:
            printf("You have selected choice two or three");
            break;
        case 4:
            printf("You have selected choice four");
            break;
        default:
            printf("You have selected no choice or the wrong choice");
            break;

    }
}