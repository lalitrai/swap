#include<stdio.h>
int main()
{
int a=0,b=0;
printf("enter the values for the variables a and b separated by space:-");//msg to give the input 
scanf("%d %d",&a,&b);//input from the user
a=a+b;//operations to swap no.
b=a-b;
a=a-b;
printf("a=%d,b=%d",a,b);//printing of no. after swapping
return 0;
}
