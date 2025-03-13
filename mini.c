//Mini Calculator
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int add();
int subtract();
int multiply();
int divide();
int power();
int modulus();
int main()
{
    int calculator;
    while(1)
        {
        printf("\n .....Enter The Following Codes For Performing Mathematical Operations.....");
        printf("\n Enter 1 for Addition \n Enter 2 For Subtraction \n Enter 3 For Multiplication \n Enter 4 Division \n Enter 5 For Power \n Enter 6 For Modulus \n Enter 7 For Exit");
        printf("\n Enter Code:");
        scanf("%d",&calculator);
        switch (calculator)
        {
        case 1:
            add();
            break;
        case 2:
            subtract();
            break;
        case 3:
            multiply();
            break;
        case 4:
            divide();
            break;
        case 5:
            power();
            break;
        case 6:
            modulus();
            break;
        case 7:
            printf("\n Exiting The Program..... \n Thank You!!!");
            exit(0);
        default:
        printf("\n Invalid Input!!! \n Please Enter Correct Code Between 1-7");
        }
    }
    return 0;
}
int add()
{
    int a,b;
    printf("Enter First Value:\n");
    scanf("%d",&a);
    printf("\n Enter Second Value:");
    scanf("%d",&b);
    printf("%d+%d=%d\n",a,b,(a+b));
    return 0;
}
int subtract()
{
    int a,b;
    printf("Enter First Value:\n");
    scanf("%d",&a);
    printf("\n Enter Second Value:");
    scanf("%d",&b);
    printf("%d-%d=%d\n",a,b,(a-b));
    return 0;
}
int multiply()
{
    int a,b;
    printf("Enter First Value:\n");
    scanf("%d",&a);
    printf("\n Enter Second Value:");
    scanf("%d",&b);
    printf("%d*%d=%d\n",a,b,(a*b));
    return 0;
}
int divide()
{
    float a,b;
    printf("Enter First Value:\n");
    scanf("%f",&a);
    printf("\n Enter Second Value:");
    scanf("%f",&b);
    if (b == 0)
    {
        printf("\n Error! Division by zero is not allowed.\n");
    }
    else
    {
        printf("\n %f / %f = %f\n", a, b, (a / b));
    }
    return 0;
}
int power()
{
    double a,b;
    printf("Enter First Value:\n");
    scanf("%lf",&a);
    printf("\n Enter Second Value:");
    scanf("%lf",&b);
    printf("%lf^%lf=%lf\n",a,b,pow(a,b));
    return 0;
}
int modulus()
{
    int a,b;
    printf("Enter First Value:\n");
    scanf("%d",&a);
    printf("\n Enter Second Value:");
    scanf("%d",&b);
    printf("%d mod %d=%d\n",a,b,(a%b));
    return 0;
}