#include <cs50.h>
#include <stdio.h>

/* Write a program that first asks the user how much change is owed
and then spits out the minimum number of coins with which said 
change can be made. */

int main(void)

{
    float input;
    int counter = 0;
    int remainder;
    int quarter = 0.25 * 100; // convert decimal value into int
    int dime = 0.10 * 100; // convert decimal value into int
    int nickel = 0.05 * 100; // convert decimal value into int
    int penny = 0.01 * 100; // convert decimal value into int
    
    do
    {
        printf("How much change is owed?: ");
        input = GetFloat();
    }
    while(input <= 0);
    
    int change = input * 100; // convert decimal into int
    
    while(change >= quarter)
    {
       remainder =  change - quarter;
       change = remainder;
       counter ++;
    }
    
    while(change >= dime)
    {
       remainder =  change - dime;
       change = remainder;
       counter ++;
    }
    
    while(change >= nickel)
    {
       remainder =  change - nickel;
       change = remainder;
       counter ++;
    }
    
    while(change >= penny)
    {
       remainder =  change - penny;
       change = remainder;
       counter ++;
    }
    
    printf("%d\n", counter);
    
    return(0);
}
