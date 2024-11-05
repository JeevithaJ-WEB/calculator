#include<stdio.h>
float add(float num1,float num2)
{
    return (num1 + num2);
}
float sub(float num1,float num2)
{
    return(num1 - num2);
} 
float mul(float  num1, float num2)
    {
        return(num1*num2);
    }
 float div (float num1,float num2)
    {
        return (num1/num2);
    }

int main()
{
    float n1,n2;
    printf("Enter the numbers:");
    scanf("%f %f",&n1,&n2);
    int op;
   printf("enter 1 for addition \n 2 for subtraction \n 3 for multiplication \n 4 for divivsion\n");
    scanf("%d",&op);
    switch(op)
    {
    case 1:
        printf("Result of addition = %f \n",add(n1,n2));
        break;
    case 2:
         printf("Result of subtraction = %f \n",sub(n1,n2));
         break;
    case 3:
         printf("Result of multiplication = %f \n",mul(n1,n2));
         break;
    case 4:
         printf("Result of division = %f \n",div(n1,n2));
         break;
    }
   return 0;
}
