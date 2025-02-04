#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int a = num%2;
    if(a==1)
    printf("Set");
    else
    printf("Not Set");
}