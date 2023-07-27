#include <stdio.h>

int main(){
    int seconds, days, hours, minutes;
    

    printf("Please enter a number of seconds: ");
    scanf("%d", &seconds);

    if (seconds> 86400){
        days = seconds/86400;

        printf("The number of days is %d", days);

    }

    else if (seconds > 3600 && seconds < 86400){
        hours = seconds / 3600;

        printf("The number of hours is %d", hours);

    }

    else if (seconds >60 && seconds < 3600){
        minutes = seconds/60;
        printf("The number of minutes is %d", minutes);
    }

    else{
        printf("What you have input is less than a minute");
    }

}