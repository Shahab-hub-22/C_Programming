// find area of circle
#include<stdio.h>
int main(){
    float r;
    printf("enter radius of circle  ");
    scanf("%f", &r);  //& denoted by address
    float pi = 3.14;
    float area = pi * r * r;
    printf("The area of circle %f", area);
    return 0;
}