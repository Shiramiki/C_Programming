#include <stdio.h>

int main(){
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