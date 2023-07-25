#include <stdio.h>

int main() {
    //this program changes temperature from degree Celsius to Fahrenheit
    float temp_c, temp_f;        
    printf("Please enter temperature in Degrees Celsius: ");
    scanf("%f", &temp_c);

    temp_f = ((9.0/5.0) * temp_c + 32);   // Using floating point values for the conversion

    printf("\n\nThe Temperature in Fahrenheit is %.2f", temp_f);

    return 0;   // Return 0 to indicate successful completion
}
