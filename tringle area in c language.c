#include <stdio.h>
int main()
{
    float height ,base;
     
    printf("enter your tringle base:");
    scanf("%f", &base);
    printf("enter your tringle height:");

    scanf("%f", &height);
    
    printf("your tringle area is %.2fcm^2", 0.5* base*height);
    return 0;


}