#include <stdio.h>
#include "basic_calculation.h"
#include "advanced_calculation.h"
#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "calculate_power.h"
#include "prime.h"
#include "factorial.h"
#include "square.h"


int main(){

    int menu_num;
    char option;

    printf("\n WELCOME TO MY CALCULATOR \n");
    printf("\n Enter your choice: \n");

    do{
        printf("\n 1. Basic calculations 2. Advanced calculations  E for exit \n");
        scanf("%d", &menu_num);

        switch(menu_num){

            case 1: option = basic_calculation();
                    break;
            case 2: option = advanced_calculation();
                    break;
            default:option = 'E';
        }

    }while(option!= 'E');

  return 0 ;
}