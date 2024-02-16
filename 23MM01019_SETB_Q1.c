#include<stdio.h>
int main(){
 float r,h;
 float pi=3.14;
 printf("enter radius and height of the cylinder:");
 scanf("%f%f",&r,&h);
 printf("\n volume of the cylinder=%.2f",pi*r*r*h);
 printf("\n surface area of the cylinder=%.2f",2*pi*r*(r+h));
 return 0;
}