#include <stdio.h>
#include "basic_calculation.h"
#include "advanced_calculation.h"
#include "addition.h"
#include "calculate_power.h"
<<<<<<< HEAD
<<<<<<< HEAD
#include "subtraction.h"
=======

=======
#include "subtraction.h"
>>>>>>> b3a15a7aede7180ea839d42feed8577b5f341157

>>>>>>> 238f650b869f78c635e87814c0fddbc1a6f057ef
#include "factorial.h"
#include "square.h"


int main(){

    int menu_num;
    char option;

    printf("\n WELCOME TO MY CALCULATOR \n");
    printf("\n Enter your choice: \n");

    do{
        printf("\n 1. Basic calculations 2. Advanced calculations \n");
        scanf("%d", &menu_num);

        switch(menu_num){

            case 1: option = basic_calculation();
                    break;
            case 2: option = advanced_calculation();
                    break;
            default: option = 'E';
        }

    }while(option!= 'E');

  return 0 ;
}