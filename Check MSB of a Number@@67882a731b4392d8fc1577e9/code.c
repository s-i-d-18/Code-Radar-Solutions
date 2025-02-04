#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int t = 0;

    while(num>0){
        int r = num%2;
        t = t*10 + r;
        num = num/2;
    }
    printf("%d", t);

    // if(t%10 == 1){
    //     printf("Set");
    // }
    // else{
    //     printf("Not Set");
    // }

}