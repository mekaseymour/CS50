#include <stdio.h>
#include <cs50.h>
 
int main(void) 
{

int counter, rows, x, y;

do
{
printf("Enter Pyramid height: ");
rows = GetInt();
}
while(rows > 23 || rows < 0);


for(counter=0; counter < rows; counter++)
{
    int num_of_blocks = counter + 2; 
    int num_of_spaces = rows + 1 - num_of_blocks;
    
 /* num of blocks will always be 2 more than counter num */
/* num of spaces will always be the total places minus the blocks */

    for(x=0; x < num_of_spaces; x++)
    {
        printf(" "); // prints spaces
    }
    for(y=0; y < num_of_blocks; y++)
    {
        printf("#"); // prints blocks
    }
    printf("\n"); // goes to next line and loop repeats
}
   return 0;
}
