#include <stdio.h>
int main(){
    char c;

    if((c>='a' && c<='z') || (c>='A' && c<='Z')){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        printf("Vowel");
        else
        printf("Consonant");
    }

    else if(c>=48 && c<=57)
    printf("Digit");

    else
    printf("Special Character");
}