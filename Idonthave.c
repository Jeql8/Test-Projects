#include <stdio.h>

int main(){
    int greatest,num,gr;
    greatest = 0;
    gr = 0;
    do{
        printf("Input a Number: ");
        scanf("%d",&num);
        if (num>greatest){
            greatest = num;
            gr++;
        }

    } while(num != 0 && gr < 3);
    if (num == 0){
        printf("\nProgram Ended due to an input of 0\n");
    }
    if (gr > 2){
        printf("\nProgram Ended due to 3 changes in the Greatest Number\n");
    }
    printf("\nThe Greatest Number is : %d",greatest);
    return 0;
}
