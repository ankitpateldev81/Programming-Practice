#include<stdio.h>
void main()
{
    int l,b;
    printf("Enter value of length and breadth=");
    scanf("%d %d",&l,&b);
    printf("Area of rectangle=%d\n",l*b);
    printf("Perimeter of rectangle=%d",2*(l+b));
}