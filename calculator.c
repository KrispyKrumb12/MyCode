#include<stdio.h>
void main()
{
    int a,b;
    char c;
    int ans = 0;
    printf("Choose an operator (+,-,*,/): ");
    scanf("%c" , &c);

    printf("Enter First Number: ");
    scanf("%d" , &a);

    printf("Enter Second Number: ");
    scanf("%d" , &b);

    if(c == '+')
    {
        ans = a + b;
        printf("The Sum is:%d\n",ans);
    }
    if(c == '-')
    {
        ans = a - b;
        printf("The Difference is:%d\n",ans);
    }
    if(c == '*')
    {
        ans = a * b;
        printf("The Multiplication is:%d\n",ans);
    }
    if(c == '/')
    {
        ans = a / b;
        printf("The Division is:%d\n",ans);
    }
    else 
    {
        printf("Please Choose Appropriate Operator");
    }
   
}