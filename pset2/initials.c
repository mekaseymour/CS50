#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{

    string fullName = GetString();   // gets name from user
    
    printf("%c", toupper(fullName[0]));   // prints first letter of name as uppercase initial          
    if (fullName != NULL)
    {
        for(int i = 0; i < strlen(fullName); i++)             
            {
                if(fullName[i] == ' ')
                {
                    printf("%c", toupper(fullName[i+1]));  //prints char after each space as uppercase initial
                }
            }
    }
    printf("\n");
    
    return 0;
}

