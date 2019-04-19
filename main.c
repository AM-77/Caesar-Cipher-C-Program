#include <stdio.h>  // To use the basic functions
#include <string.h> // To use strlen() function

int main()
{
    int caesar_key = 1;     // The key shift
    char plain_text[191];   // To store the plain text entered by the user

    printf("********* Caesar Cipher C Program ********* \n\n");

    printf("[!] Please enter a text: ");    // Asking the user for the text to be ciphered

    fgets(plain_text, sizeof(plain_text), stdin);   // Reading and Storing the entered text in the plain_text variable

    int text_length = strlen(plain_text) - 1;   // Getting the lenght of the entered text ( -1 because fgtes adds '\0' at the end of the text )

    printf("[+] The encrypted text is: ");  // Priting a message to the user

    // Looping on all the letters of the entered text
    for(int i=0; i < text_length; i++){

        // (int)plain_text[i]   => Converting the latter to an ASCCII code
        // - 97                 => Getting the number of the letter in the english alphabet (ASCII: a=97, b=98, c=99 ...)
        // + caesar_key         => Shifting the letter number
        // % 26                 => Because there is 26 letter in the english alphabet
        // + 97                 => Getting the ASCII code for the letter form it's number in the english alphabet
        // (char)               => Converting the ASCCII code to a letter

        printf("%c", (char)((int)plain_text[i] - 97 + caesar_key) % 26 + 97);   // Printing the result 'the ciphered char'
    }

    printf("\n");
    return 0;
}
