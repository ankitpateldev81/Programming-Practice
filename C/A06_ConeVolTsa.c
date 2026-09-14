#include<stdio.h>
void main()
{
    float radius,height,slant_height,vol,tsa;
    printf("Enter value of radius, height and slant height=");
    scanf("%f %f %f",&radius,&height,&slant_height);
    vol=(3.14*radius*radius*height)/3;
    tsa=3.14*radius*(slant_height+radius);
    printf("Volume of cone=%f\nT.S.A of cone=%f",vol,tsa);
}