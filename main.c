#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a,b,operator;
    srand(time(NULL));
    a = rand()%5;
    b = rand()%5;
    do{
        printf("Choose an operator(1-4):\n\t1) +\n\t2) - \
        \n\t3) *\n\t4) /\n");
        scanf("%d", &operator);
        if (operator < 1 || operator > 4) {
            printf("Error: Please enter a valid number between 1 and 4.\n");
    }
    }while(operator<1 || operator>4);

    return 0;
}
