#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int caesar_key = 1;
    char plain_text[191];
    char encrypted_text[191];

    printf("********* Caesar Cipher C Program ********* \n\n");

    printf("[!] Please enter a text: ");

    fgets(plain_text, sizeof(plain_text), stdin);

    int text_length = strlen(plain_text) - 1;

    printf("[+] The encrypted text is: ");

    for(int i=0; i < text_length; i++){
        printf("%c", (char)((int)plain_text[i] - 97 + caesar_key) % 26 + 97);
    }

    printf("\n");
    return 0;
}
