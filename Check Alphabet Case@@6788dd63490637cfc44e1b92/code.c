#include <stdio.h>
int main(){
    char letter;
    scanf("%d", &letter);

    int l = (letter);

    if(l>=97 && l<=122)
    printf("Lowercase");
    
    else if(l>=65 && l<=90)
    printf("Uppercase");
}