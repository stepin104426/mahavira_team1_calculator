#include "factorial.h"
#include<stdio.h>

int factorial(int operand)
{
    int fact = 1;
    //printf("enter the number");
    //scanf("%d", &operand);
    if(operand < 0)
    return 1;
    else{
        for(int i=1;i<=operand;++i){
            fact*=i;
        }
        return fact;
    }
    return 0;
}
