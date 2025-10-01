#include<stdio.h>
int main()
{
float pi,radius,height,volume;
    printf("enter pi");
    scanf("%d",&pi);
    printf("enter radius");
    scanf("%d",&radius);
    printf("enter height");
    scanf("%d",&height);
    volume=pi*radius*radius*height;
    
    float pie,radii,heightt,surfacearea;
    printf("enter pi");
    scanf("%d",&pi);
    printf("enter radius");
    scanf("%d",&radius);
    printf("enter height");
    scanf("%d",&height);
    surfacearea=2*pi*radius*radius+2*pi*radius*height;
    return 0;
}