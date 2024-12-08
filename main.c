#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a,b,operator;
    srand(time(NULL));
    do{
        printf("Dialekse Praksi(1-5):\n\t1) Prosthesi\n\t2) Afairesi \
        \n\t3) Pollaplasiasmos\n\t4) Diairesi\n\t5) Tyxaia Epilogi!\n");
        scanf("%d", &operator);
        if (operator < 1 || operator > 5) {
            printf(" Parakalw dialekse enan arithmo apo to 1 ews to 5\n");
    }
    }while(operator<1 || operator>5);
    switch (operator)
    {
    case 1: addition(); break;
    case 2: subtraction(); break;
    case 3: multiplication(); break;
    case 4: division(); break;
    case 5: randoperation(); break;
    }
    return 0;
}
