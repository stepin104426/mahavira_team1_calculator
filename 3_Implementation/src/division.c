#include <division.h>
#include <stdio.h>
int division()
{
    float num1, num2;
    float quotient;
    printf("Enter Number 1 : ");
    scanf("%f", &num1);
    if(num1 == 0){
        printf("Invalid Operand\n");
        printf("Enter a valid Number : ");
        scanf("%f", &num1);
     }
    printf("Enter Number 2 : ");
    scanf("%f",  &num2);
    if(num2 == 0){
        printf("Invalid Operand\n");
        printf("Enter a valid Number : ");
        scanf("%f", &num2);
     }
    quotient = num1 / num2;
    printf("Quotient = %.02f", quotient);
    return 0;

}
