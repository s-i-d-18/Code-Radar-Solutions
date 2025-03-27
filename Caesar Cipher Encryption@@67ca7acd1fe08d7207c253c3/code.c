#include <stdio.h>
#include <ctype.h>

// Function to encrypt the message using Caesar Cipher
void caesarCipher(char message[], int shift) {
    for (int i = 0; message[i] != '\0'; i++) {
        char ch = message[i];

        if (isalpha(ch)) { // Only shift alphabetic characters
            char base = isupper(ch) ? 'A' : 'a';
            message[i] = (ch - base + shift) % 26 + base;
        }
    }
}

int main() {
    char message[1000]; // Assuming a max length of 1000
    int shift;

    // Read the input
    fgets(message, sizeof(message), stdin);
    scanf("%d", &shift);

    // Apply the Caesar Cipher
    caesarCipher(message, shift);

    // Print the encrypted message
    printf("%s", message);

    return 0;
}
