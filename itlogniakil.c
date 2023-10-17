#include <stdio.h>

void main(){
    float discount,cost,amount;
    int eggtype,orders;
    float egg1,egg2,egg3;
    egg1 = 15;
    egg2 = 22.5;
    egg3 = 13;
    discount = 0;
    printf("Itlog ni Noy AKIL!\n");
    printf("[1] #16 @ Php %.2f\n",egg1);
    printf("[2] #18 @ Php %.2f\n",egg2);
    printf("[3] penoy @ Php %.2f\n",egg3);
    do{
        printf("Enter your egg type: ");
        scanf("%d",&eggtype);
    } while (eggtype > 3 || eggtype < 0);

    printf("Enter total egg orders: ");
    scanf("%d",&orders);
    printf("Enter amount: ");
    scanf("%f",&amount);
    printf("\nSUMMARY\n");
    if (orders >= 300){
        discount = 0.1;
    } else if(orders >= 150){
        discount = 0.05;
    }
    if (eggtype == 1){
        printf("Total Cost: Php %.2f", egg1 * orders);
        cost = egg1*orders;
    } else if (eggtype == 2){
        printf("Total Cost: Php %.2f",egg2 * orders);
        cost = egg2*orders;
    } else{
        printf("Total Cost: Php %.2f",egg3*orders);
        cost = egg3*orders;
    }
    printf("\nDiscount: Php %.2f\n",discount*cost);
    if (discount * cost > 0){
        printf("Discounted Price: Php %.2f\n",cost - discount*cost);
    }
    if (cost - discount * cost > amount){
        amount = (cost-discount*cost) - amount;
        printf("Change: (Php %.2f)",amount);
    } else{
        amount = amount - (cost-discount*cost);
        printf("Change: Php %.2f",amount);
    }



}
