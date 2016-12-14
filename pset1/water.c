#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Enter the length of your shower in minutes:");
    int x = GetInt();
    printf("The equivalent number of water bottles is %d.\n",(x*192)/16);
}