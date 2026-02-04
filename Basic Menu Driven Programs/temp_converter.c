//To convert from Celsius to Fahrenhiet and vice-versa
#include <stdio.h>
int main()
{
    int choice;
    float celsius, fahrenheit;
    printf("Enter Your Choice: ");
    printf("\n1. Convert Celsius to Fahrenheit");
    printf("\n2. Convert Fahrenheit to Celsius");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        {
            //to convert the temperature in Celsius to equivalent Fahrenheit
            printf("Enter the temperature: ");
            scanf("%f",&celsius);
            float equivalent_fahrenheit= celsius* (9.0/5.0)+32;
            printf("%f °C is equal to %.2f °F",celsius,equivalent_fahrenheit);
            break;
        }

        case 2:
        {
            //to convert Fahrenheit to Celsius
            printf("Enter the temperature:");
            scanf("%f",&fahrenheit);
            float equivalent_celsius= (fahrenheit-32) *(5.0/9.0);
            printf("%f °F is equal to %.2f°C  ", fahrenheit, equivalent_celsius);
            break;
        }

        case 3:
        printf("Wrong Choice. Enter 1 or 2");
    }
return 0;
}
