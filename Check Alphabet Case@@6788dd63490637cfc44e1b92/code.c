#include <stdio.h>
int main(){
    char letter;
    scanf("%c", &letter);

    // int l = (letter);

    if(letter>='A' && letter<='Z')
    printf("Upercase");
    
    else
    printf("Lowercase");
}