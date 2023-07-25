#include <stdio.h>

int main(){
    //This program outputs that a temperature is valid if it is within the range -50 to 150
    float temp;

    printf("Please enter Temperature");
    scanf("%f", &temp);
    
    if(temp >= -50 && temp <= 150) {
        printf("The Temperature is Valid");
    }

}