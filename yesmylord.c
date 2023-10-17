#include <stdio.h>

void main() {
    // to do code logic here
    int num,value,square,count,count2,palin,num2,value2;
    int palindrome[100];
    int numbers[100];
    printf("Enter your number: ");
    scanf("%d",&num);
    value = 1;
    count = 1;
    count2 = 1;
    palin = 0;
    while (num/value > 1){
        value*=2;
        count++;
    }
    num2 = count;
    printf("The value of your soul is ");
    for (int i = 1; i <= count; i++){
        numbers[i] = num/value;
        printf("%d",numbers[i]);
        num = num%value;
        value/=2;
    }

    while (count > 0){
        palindrome[count] = numbers[count2];
        count2++;
        count--;
    }
    count++;
    for (int i = 1; i < num2; i++){
        if (palindrome[count]!= numbers[count]){
            palin = 1;
        }
        count++;
    }


    printf(".");
    if (palin != 0){
        printf("\nAhh, you are filty. Be gone.");
    } else{
        printf("\nYou are worthy my child.");
    }





}
