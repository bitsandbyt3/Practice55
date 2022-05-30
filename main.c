#include <stdio.h>

int main() {
    double price = 1.45;

    for (int i = 1; i <= 10; i++){
        if (i == 1){
            printf("Amount\t\tPrice\n");
            printf("%6d\t%8.2f Euro\n", i, (price*i));
        }else{
            printf("%6d\t%8.2f Euro\n", i, (price*i));
        }
    }
}
