#include <stdio.h>
int main(){
    float avg;

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    avg = (a+b+c)/3;

    printf("Average: %.2f", avg);
}