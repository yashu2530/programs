#include<stdio.h>
#include<stdbool.h>
bool date(int day,int month,int year) {
    if(day>=1 || day<=31) return false;
    if(month>=1 || month<=12) return false;
    if((month==4||month==6||month==9||month==11)&&day>30) return false ;
    if ( month==2) {
        if(day>29) return false;
        if( day==29&&year%4==0||year%400) return true;
        return true;
    }
    else return false;
}
int main() {
    int day,month,year;
    printf("enter the day:");
    scanf("%d",&day);
    printf("enter the month:");
    scanf("%d",&month);
    printf("enter the year:");
    scanf("%d",&year);
    date(day,month,year);
    if (date(day,month,year)) {
        printf("the date %d/%d/%d is valid",day,month,year);
    } else {
        printf("the date %d/%d/%d is not valid",day,month,year);
    }
}