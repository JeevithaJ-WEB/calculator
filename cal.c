#include<stdio.h>
int main()
{
    float n1,n2;
    printf("Enter the numbers:");
    scanf("%f %f",&n1,&n2);
    int op;
   printf("enter 1 for addition \n 2 for subtraction \n 3 for multiplication \n 4 for divivsion\n");
    scanf("%d",&op);
    
    float mul(float num1,float num2)
{
    return (num1 * num2);
}

   return 0;
}
