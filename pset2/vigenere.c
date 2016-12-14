#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>   // need for isalpha()
#include <stdlib.h>  // need for atoi()

int main(int argc, char *argv[])
{
    string keyword = argv[1];
    
    if (argc != 2) 
    {
        printf ("Usage: /home/cs50/pset2/vigenere <keyword>\n");
        return 1; // RETRY if user enters anything other than 2 arguments
    } 
    
    else
    {
        for (int j = 0; j < strlen(keyword); j++ )
    {
        if(!isalpha(keyword[j]))
        {
            printf("Keyword must only contain letters A-Z and a-z\n"); //returns if keyword is not alphabetical 
            return 1;
        }
    }
        string plainText = GetString();
        string alphaLo = "abcdefghijklmnopqrstuvwxyz"; // declare lowercase alphabet
        string alphaUp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // declare uppercase alphabet
        
        if(plainText != NULL)
        {
            int j= 0;
            for(int i = 0; i < strlen(plainText); i++, j++)
            {
                if(islower(plainText[i]))
                {
                    int letter = j % strlen(keyword); // int letter is the index number of the keyword for the given loop iteration
                    int ascii_value = (tolower(keyword[letter])); // ASCII value of keyword letter
                    int key = (25 - (122 - ascii_value)); // int key is keyword[i]'s position in the English alphabet
                    
                    int input = plainText[i]; // converts plainText[i] to corressponding ASCII number
                    int placement = (25 - (122 - input)); // int placement is plainText[i]'s position in the English alphabet
                    
                    int cipher = (placement + key) % 26; 
                    printf("%c", alphaLo[cipher]);
                }
                else if(isupper(plainText[i]))
                {
                    int letter = j % strlen(keyword); // int letter is the index number of the keyword for the given loop iteration
                    int ascii_value = (toupper(keyword[letter])); // ASCII value of keyword letter
                    int key = (25 - (90 - ascii_value)); // int key is keyword[i]'s position in the English alphabet
                    
                    int input = plainText[i]; // converts plainText[i] to corressponding ASCII number
                    int placement = (25 - (90 - input)); // int placement is plainText[i]'s position in the English alphabet
                    
                    int cipher = (placement + key) % 26; 
                    printf("%c", alphaUp[cipher]);
                }
                else
                {
                    printf("%c", plainText[i]);
                    j--; // decrements j if there's no plainText character to rotate
                }
                
            }
            
            printf("\n");
        }    
        
    }
  
}