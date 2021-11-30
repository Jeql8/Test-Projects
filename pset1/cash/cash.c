#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    
    float change_dollar;
    
    int coins = 0; 
    
    // Gets a real number from the user
    
    do
    {
        change_dollar = get_float("Enter change: ");
    } 
    while (change_dollar <= 0);
    
    // Converts dollars to cents and rounds it up
    
    int cents = round(change_dollar * 100);
    
    // Calculates the minimum amount of coins it would take to return the change
    
    while (cents > 0)
    {
        // Quarter
        
        if (cents - 25 >= 0)
        {
            cents = cents - 25;
            coins++;
        }
        
        // Dime
        
        else if (cents - 10 >= 0)
        {
            cents = cents - 10;
            coins++;
        }
        
        // Nickel
        
        else if (cents - 5 >= 0)
        {
            cents = cents - 5;
            coins++;
        }
        
        // Dime
        
        else if (cents - 1 >= 0)
        {
            cents = cents - 1;
            coins++;
        }
        
        else
        {
            break;
        }
       
    }
    
    // Prints out the amount of coins 
    
    printf("%i\n", coins);
    
    
    
    
    
}