#include<stdio.h>
int main(){
int l,u;
int sum=0;
printf("enter lowerlimit and upperlimit:");
scanf("%d%d",&l,&u);

for(int j=l; j<=u; j++)
{ 
    for(int i=1; i<j; i++)
    {
       if(j%i==0)
       sum=sum+i;}

    if(sum==j)
{
    printf("%d is a perfect number",j);
}
}

 return 0;
}