#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for (int i = 1; i<=n;i++){
        for(int j = 0; j<n-i;j++){
            printf(" ");
        }
        for(int j = (2*(i-1))+1; j<=i; i++){
            printf("*");
        }
        for(int j = 0; j<n-i; j++){
            printf(" ");
        }
        printf("\n");
    }
}