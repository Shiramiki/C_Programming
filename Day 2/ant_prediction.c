#include <stdio.h>

int main(){

    int initial, days, current_pop;
    float av_daily_pop_decrease;

    printf("Please enter the initial or starting number of ants: ");
    scanf("%d", &initial);

    while (initial<2){
        printf("Quantity invalid.\n Please Re-enter the initial or starting number of ants: ");
        scanf("%d", &initial);
    }

    current_pop =initial;

    printf("Please enter the average daily population increase as a percentage of the population: ");
    scanf("%f", &av_daily_pop_decrease);

    while(av_daily_pop_decrease<0){
        printf("Quantity invalid\nPlease Re-enter the average daily population increase as a percentage of the population: ");
        scanf("%f", &av_daily_pop_decrease);

    }

    printf("Please enter the number of days the system should predict for: ");
    scanf("%d", &days);    

    while(days<1){
        printf("Quantity Invalid.\nPlease enter the number of days the system should predict for: ");
    scanf("%d", &days);  
    }

    for(int i = 1; i<=days; i++){
        current_pop+= (current_pop*av_daily_pop_decrease)/100;

        printf("DAY %d \n The current ant population is %d\n", i, current_pop);

    }


    return(0);
}