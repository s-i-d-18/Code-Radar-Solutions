#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int t = 0;

    do{
        int r = num%2;
        t = t*10 + r;
        num = num/2;
    }while(num>0)
    printf("%d", t);

    // if(t%10 == 1){
    //     printf("Set");
    // }
    // else{
    //     printf("Not Set");
    // }

}