#include <stdio.h>
int main(){
    int year;
    scanf("%d", &year);
    if(year == 2023)
    printf("Not a Leap Year");
    else if(year%400==0){
        printf("Leap Year");
    }
    else if("year%4==0"){
        if(year%100==0){
            printf("Not a Leap Year");
        }
        else
        printf("Leap Year");
    }
}