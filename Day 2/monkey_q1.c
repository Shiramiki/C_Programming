#include <stdio.h>

int main(){

    int monkey_daily[3][7], total_consumption = 0, smallest = 32767, biggest = 0;
    float av_consumption;
    

    for(int i = 0; i<7; i++){
        for(int j = 0; j<3; j++){

            printf("Day %d\n Please enter the quantity of food in pounds for monkey %d\n",i+1,j+1);
            scanf("%d", &monkey_daily[j][i]);

            while (monkey_daily[j][i]<0){
                printf("Your input was invalid.\n\n");
                printf("Day %d\n Please enter the quantity of food in pounds for monkey %d\n",i+1,j+1);
                scanf("%d", &monkey_daily[j][i]);
            }

            total_consumption += monkey_daily[j][i];

        }
    }

    av_consumption = total_consumption/7.0;

    for (int i = 0; i<7; i++){
        for(int j = 0; j<3; j++){
            
            if (smallest > monkey_daily[j][i]){
                smallest = monkey_daily[j][i];
            }

            if (biggest < monkey_daily[j][i]){
                biggest = monkey_daily[j][i];
            }
        }
    }

    printf("After 7  days of gathering data. Please find below a Report based on the data collected\n\n");
    printf("The average amount of food eten by the whole family of monkeys is: %.2f\n", av_consumption);
    printf("The least amount of food eaten during the week by any one of the mokeys %d\n", smallest);
    printf("The greatest amount of food eaten during the week by any one of the mokeys %d", biggest);

    return(0);
}