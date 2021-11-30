#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int starting_point;
    int end_point;
    int years = 0;
    do
    {
        // Gets starting population number greater than 9
        starting_point = get_int("Enter the starting number (9+) ");
    }
    while (starting_point < 9);
    
    do
    {
        // Gets ending population number which has to be greater than the starting
        end_point = get_int("Enter the ending number (greater than starting) ");
    }
    while (end_point < starting_point);
    
        
    // Calculates how many years it would take for the starting population to reach the end
    
    for (int n = 0; starting_point < end_point; n++)
    {
        int population_cut = starting_point / 4;
        int population_add = starting_point / 3;
        starting_point += population_add;
        starting_point -= population_cut;
        years++;
        
    }
    // returns how many years it takes
    printf("Years: %i ", years);
    

}