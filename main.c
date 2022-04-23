#include <stdio.h>  
#include <math.h>
int main () 
{

char choice;
  
int n1,n2,a;
  
float result,x;
{printf("select an operator\n0.+\n1.-\n2.*\n3./\n4.Sin(X)\n5.Cos(X)\n6.Tan(X)\n7.squareroot\n8.x^2\n9.x^3\n");
scanf("%c",&choice);}

if (choice == '0')
{
    printf("Enter number 1:");
    scanf("%d",& n1);
    printf("Enter number 2:");
    scanf("%d",& n2);
    result=n1+n2;
    printf("Addition of %d and %d is equal to %.2f",n1,n2,result);
}
else if (choice == '1')
{
    printf("Enter number 1:");
    scanf("%d",& n1);
    printf("Enter number 2:");
    scanf("%d",& n2);
    result=n1-n2;
    printf("subtraction of %d and %d is equal to %.2f",n1,n2,result);
}
else if (choice == '2')
{
    printf("Enter number 1:");
    scanf("%d",& n1);
    printf("Enter number 2:");
    scanf("%d",& n2);
    result=n1*n2;
    printf("multiplication of %d and %d is equal to %.2f",n1,n2,result);
}
else if (choice == '3')
{
    if (n2 == 0)
    {
        printf("\n Divisor cannot be zero. Please enter another value");
        scanf("%d",&n2);
    }
    printf("Enter number 1:");
    scanf("%d",& n1);
    printf("Enter number 2:");
    scanf("%d",& n2);
    result=n1/n2;
    printf("division of %d and %d is equal to %.2f",n1,n2,result);
}
else if (choice == '4')
{
    printf("Enter X(angle)");
    scanf("%f",&x);
    result=sin(x*3.14/180);
    printf("value of sin%f=%.2f",x,result);
}
else if (choice == '5')
   {
    printf("Enter X(angle)");
    scanf("%f",&x);
    result=cos(x*3.14/180);
    printf("value of cos%f=%.2f",x,result);
}
else if (choice == '6')
   {
    printf("Enter X(angle)");
    scanf("%f",&x);
    result=tan(x*3.14/180);
    printf("value of tan%f=%.2f",x,result);
   }
   else if (choice == '7')
   {
    printf("Enter the number:");
    scanf("%d",&a);
    result=sqrt(a);
    printf("squareroot of %d is equal to %.2f",a,result);
   }
   else if (choice == '8')
   {
    printf("Enter the number:");
    scanf("%d",&a);
    result=a*a;
    printf("square of %d is equal to %.2f",a,result);
   }
   else if (choice == '9')
   {
    printf("Enter the number:");
    scanf("%d",&a);
    result=a*a*a;
    printf("cube of %d is equal to %.2f",a,result);
   }
  


return 0;
}