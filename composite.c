#include <stdio.h>

void main(){
    int num,composite;
    composite = 0;
    printf("Enter a number: ");
    scanf("%d",&num);

    for (int i = 1; i <= num; ++i){
        composite = 0;
        if (num % i == 0){
            for (int k = 2; k < i; k++){
            if (i % k == 0){
                composite = 1;
            }
        }
            if (composite == 1){
                printf("{%d} ",i);
            } else{
                printf("%d ",i);
            }

        }
    }
}
