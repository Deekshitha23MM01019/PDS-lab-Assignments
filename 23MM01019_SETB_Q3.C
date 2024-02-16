#include<stdio.h>
#include<math.h> 
int main(){
 int x,y,x1,y1,r;
 printf("enter the centre coordinates of the circle:");
 scanf("%d%d",&x,&y);
 printf("\n enter the radius of the circle:");
 scanf("%d",&r);
 printf("\nenter the cocordinates of the point:");
 scanf("%d%d",&x1,&y1);
 if(sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1))<r)
 printf("\nthe point lies in the circle");
 else if(sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1))==r)
 printf("\nthe point lies on the circle");
 else {printf("\nthe point lies out of the circle");}
 return 0;
}