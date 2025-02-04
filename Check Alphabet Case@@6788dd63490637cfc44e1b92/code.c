#include <stdio.h>
int main(){
    char letter;
    scanf("%d", &letter);

    int l = int(letter);

    if(l>=97 && l<=122)
    printf("Lowercase");
    
    else
    printf("Uppercase");
}