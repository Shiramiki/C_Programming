#include <stdio.h>

int main(){
    /*
        This progran allows the user to input their name, then outputs whether or not the are an adult
    */
    int age;

    printf("Please enter your age");
    scanf("%d", &age);

    if (age<18){
        printf("You are a minor");
    }

    else{
        printf("You are an adult");
    }
}