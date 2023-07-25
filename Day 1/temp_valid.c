#include <stdio.h>

int main(){
    float temp;

    printf("Please enter Temperature");
    scanf("%f", &temp);
    
    if(temp >= -50 && temp <= 150) {
        printf("The Temperature is Valid");
    }

}