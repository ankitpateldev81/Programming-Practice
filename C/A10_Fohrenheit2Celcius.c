#include<stdio.h>
void main()
{
    float F,FtoC_mean_C;
    printf("Enter value of fohrenheit=");
    scanf("%f",&F);
    FtoC_mean_C=5*(F-32)/9;
    printf("Conversion of Fohrenheit To Celcius=%f",FtoC_mean_C);
}