#include <stdio.h>
int main(){
    char letter;
    scanf("%d", &letter);

    int l = (letter);

    if(l>='A' && l<='Z')
    printf("Upercase");
    
    else
    printf("Lowercase");
}