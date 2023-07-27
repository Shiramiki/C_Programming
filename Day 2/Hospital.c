#include <stdio.h>

int main(){
    char admission;
    int no_day, rate, services, meds;
    int in_patient_fnc(int day, int rates, int service, int med);
    int out_patient_fnc(int service, int med);

    printf("Is the pastient an in-patient or an out-patient enter I for in-patient and O for out-patient: ");
    scanf("%c", &admission);

    switch(admission){
        case 'I':
        case 'i':
            do{
                printf("Please enter the number of days to be spent in the hospital: ");
                scanf("%d", &no_day); 
            }while(no_day<0);

            do{
                printf("Please enter the daily rate: ");
                scanf("%d", &rate);
            }while(rate<0);
           
            do
            {
                printf("Please enter the total charges for hospital services: ");
                scanf("%d", &services);

            } while (services<0);
            

            do{
                printf("Please enter medication charges: ");
                scanf("%d", &meds);

            }while (meds<0);

            printf("Your total hospital bill is : %d", in_patient_fnc(no_day,rate,services,meds));

            break;

        case 'o':
        case 'O':
            do
            {
                printf("Please enter the total charges for hospital services: ");
                scanf("%d", &services);

            } while (services<0);
            

            do{
                printf("Please enter medication charges: ");
                scanf("%d", &meds);

            }while (meds<0);

            printf("Your total hospital bill is : %d", out_patient_fnc(services,meds));
            break;

        default:
            printf("you have entered an invalid key!!\n\n");
    }

    

    
}

int in_patient_fnc(int day, int rates, int service, int med){
        int summ = (day * rates) + service + med;

        return(summ);
    }

int out_patient_fnc(int service, int med){
        int summ = service+ med;

        return(summ);
    }
