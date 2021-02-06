#include "advanced_calculation.h"
#include "prime.h"
#include "factorial.h"
#include "square.h"
#include "calculate_power.h"
#include "dates.h"

char advanced_calculation(){

int num, catch;
char back=0;

    do{
    printf("1.Power  2.factorial 3.square  4.prime  5.Difference of days  6.leap year");
    printf("\n Enter your choice:");
    scanf("%d",&num);

        switch(num){

            case 1: calculate_power();
                    printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    scanf(" %c", &back);
                    break;
            case 2: catch = factorial();
                     printf("the factrial is %d", catch);   
                     printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                     scanf(" %c", &back);
                    break;
            case 3: square();
                    printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    scanf(" %c", &back);
                    break;
            case 4: prime();
                    printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    scanf(" %c", &back);
                    break;
            case 5: datescalc();
                    printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    scanf(" %c", &back);
                    break;
            case 6: leapyear();
                    printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    scanf(" %c", &back);
                    break;
        }
    }while(back!= 'N');

    return 'M';

}