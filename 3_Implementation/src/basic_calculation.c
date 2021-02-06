#include "basic_calculation.h"
#include "addition.h"
#include "subtraction.h"


char basic_calculation(){

int num;
char back=0;

do{
    printf("\n 1.Addition   2.Subtraction  3.Multiplication  4.Division \n\n");
    printf("\n Enter your choice:");
    scanf("%d",&num);

        switch(num){

            case 1: addition();
                    printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    scanf(" %c", &back);
                    break;
            case 2: subtraction();
                    printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    scanf(" %c", &back);
                    break;
            case 3: //multiplication();
                    //printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    //scanf(" %c", &back);
                    break;
            case 4: //division();
                    //printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    //scanf(" %c", &back);
                    break;
        }
    }while(back!= 'N');

    return 'M';

}