#include <stdio.h>
int main(){
    char letter;
    scanf("%c", &letter);

    // int l = (letter);

    if(letter>='A' && letter<='Z')
    printf("Uppercase");

    else if(letter>='a' && letter<='z')
    printf("Lowercase");
    
    else
    printf("Not an alphabet");
}