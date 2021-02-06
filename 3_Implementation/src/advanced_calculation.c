#include "advanced_calculation.h"
#include "prime.h"

char advanced_calculation(){

int num;
char back=0;

    do{
    printf("1.Power  2.factorial 3.square  4.prime  5.Difference of days  6.leap year");
    printf("\n Enter your choice:");
    scanf("%d",&num);

        switch(num){

            case 1: //power();
                    //printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    //scanf(" %c", &back);
                    break;
            case 2: //factorial();
                    //printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    //scanf(" %c", &back);
                    break;
            case 3: //square();
                    //printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    //scanf(" %c", &back);
                    break;
            case 4: //prime();
                    //printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    //scanf(" %c", &back);
                    break;
            case 5:///difference_of_days();
                    //printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    //scanf(" %c", &back);
                    break;
            case 6: //leap_year();
                    //printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    //scanf(" %c", &back);
                    break;
        }
    }while(back!= 'N');

    return 'M';

}