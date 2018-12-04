#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if(argc != 2)
        {
            printf("Key is not valid. Please try again.\n");
            return 1;
        }
    int k = atoi(argv[1]);
    k = k%26;
    printf("Please enter text\n");
    string text = get_string();
    printf("ciphertext:\n");
    for(int i = 0, n=strlen(text); i < n; i++)
    {
        if(isalpha(text[i]))
        {
            if(isupper(text[i]))
            {
                if (text[i] + k > 'Z')
                    printf("%c", text[i] - (26 - k));
                else
                    printf("%c", text[i] + k);
            }
            else
            {
                if (text[i] + k > 'z')
                    printf("%c", text[i] - (26 - k));
                else
                    printf("%c", text[i] + k);
            }
        }
        else
        printf("%c", text[i]);
    }
    printf("\n");
    return 0;
}