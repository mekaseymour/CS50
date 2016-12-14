#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{  
    string alphaLo = "abcdefghijklmnopqrstuvwxyz"; // declare lowercase alphabet
    string alphaUp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // declare uppercase alphabet 
    
    if (argc != 2) 
    {
        printf ("Usage:  /home/cs50/pset2/caesar <key>\n");
        return 1; // RETRY if user enters anything other than 2 arguments
    }
    else
    {
        int key = atoi(argv[1]);  
        string plainText = GetString(); // get user input 
        
        if(plainText != NULL)
        {
            for(int i = 0; i < strlen(plainText); i++)
            {
                if(isupper(plainText[i]))
                {
                    int input = plainText[i];  // turns element of string array into ASCII int
                    int placement = (25 - (90 - input)); // converts uppercase ASCII into placement in the alphabet
                    int cipher = (placement + key) % 26; 
                    printf("%c", alphaUp[cipher]);
                }
                else if(islower(plainText[i]))
                {
                    int input = plainText[i];
                    int placement = (25 - (122 - input)); // converts lowercase ASCII into placement in the alphabet
                    int cipher = (placement + key) % 26; 
                    printf("%c", alphaLo[cipher]);
                }
                else
                {
                    printf("%c", plainText[i]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}