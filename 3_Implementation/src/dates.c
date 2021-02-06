#include<stdio.h>
#include"dates.h"
int datescalc()
{
    int d1,m1,y1,d2,m2,y2;
    int dr,mr,yr;
    int check =1;
    printf("enter the start date in dd/mm/yyyy format");
    scanf("%2d%2d%4d",&d1,&m1,&y1);
    printf("enter the end date in dd/mm/yyyy format");
    scanf("%2d%2d%4d",&d2,&m2,&y2);
    check=validity(d1,m1,y1);
    if (check==0){return 0;}
    check=validity(d2,m2,y2);
    if (check==0){return 0;}
    dr=0;mr=0;yr=0;
    if(d2<d1)
    {
        if(m2==3)
        {
            if((y2%4==0&&y2%100!=0)||y2%400==0)
            {
                d2=d2+29;
            }
            else
            {
                d2=d2+28;
            }
        }
        else if(m2==5||m2==7||m2==10||m2==12)
        {
            d2=d2+30;
        }
        else
        {
            d2=d2+31;
        }

        m2=m2-1;
    }
    if(m2<m1)
    {
        m2=m2+12;
        y2=y2-1;
    }
        dr=d2-d1;
        mr=m2-m1;
        yr=y2-y1;
    printf("difference between two dates is %d days %d months %d years",dr,mr,yr);
    return 0;
}

int validity(int dd,int mm,int yy)
{
    int sdd=28;
    if((yy%4==0&&yy%100!=0)||yy%400==0)
    {
      sdd=29;
    }
    if(dd<1)
    {
        printf("invalid day format");
        return 0;
    }
    if(yy<1000 || yy>9999)
    {
        printf("invalid year format");
        return 0;
    }
    if(mm<1 || mm>12)
    {
        printf("invalid month format");
        return 0;
    }
    if( (mm==4||mm==6||mm==9||mm==11) && (dd>30||dd<1) )
    {
        printf("invalid day format");
        return 0;
    }
    if((mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)&&(dd<0||dd>31))
    {
        printf("invalid day format");
        return 0;
    }
    if(mm==2 && dd>sdd)
    {
       printf("invalid day format");
       return 0;
    }

}
int leapyear(int ly)
{   int yyy;
    scanf("%d",&yyy);
    if((ly%4==0&&ly%100!=0)||ly%400==0)
    {
      printf("leap year");
    }
    else
     printf("not");
    return 0;
}