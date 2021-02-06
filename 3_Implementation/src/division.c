#include"division.h"
int main()
{
    float num1, num2;
    float division;
    printf("Enter Number 1 : ");
    scanf("%f", &num1);
    if(num1 == 0){
        printf("Invalid Operand");
        printf("Enter a valid Number");
        scanf("%f", &num1)
     }
    printf("Enter Number 2 : ");
    scanf("%f", &num2);
    if(num2 == 0){
        printf("Invalid Operand");
        printf("Enter a valid Number");
        scanf("%f", &num2)
     }
     division = (num2/num1);
     printf("Solution : ", &division);
    return 0;

}





