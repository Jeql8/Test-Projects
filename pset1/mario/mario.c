#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = -10;

    while (n <= 0 || n > 8)
    {
        
     n = get_int("Enter a number 1-8: ");
     
     if (n <= 8)
     
     {
       int z = n;
       
       for (int i = 0;i < n; i++)
       {
           for (int x = 1; x < z; x++)
               {
                   printf(" ");

               }
           for (int j = 0;j <= i;j++ )
           {

               printf("#");

           }
           printf("  ");
           
           for (int b = 0; b <= i;b++)
           {
               printf("#");
           }
           
           printf("\n");
           
           z--;
           
       }
     }




     }








}