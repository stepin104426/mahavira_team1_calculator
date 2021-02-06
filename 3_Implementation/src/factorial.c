#include "factorial.h"
#include<stdio.h>

int factorial()
{
    
    int fact = 1, operand = 0;
    printf("enter the number");
    scanf("%d", &operand);
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
