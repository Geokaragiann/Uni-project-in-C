#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char *WRONG_RESP[] = {
    "Lathos. Kane alli mia prospathia.",
    "Lathos. Prospathise allh mia fora.",
    "Oxi. Dwse mia allh apanthsh.",
    "Lathos. Sigoura to ksereis. Prospathise pali."
};

const char *RIGHT_RESP[] = {
    "Polu kala.",
    "Sugxarhthria.",
    "Mpravo.",
    "Swsta."
};

void addition();
int main() {
    
    int operator;
    srand(time(NULL) ^ getpid()); // Unique process ID contained, to create random numbers in sub-second conditions.
    do{
        printf("Dialekse Praksi(1-5):\n\t1) Prosthesi\n\t2) Afairesi \
        \n\t3) Pollaplasiasmos\n\t4) Diairesi\n\t5) Tyxaia Epilogi!\n");
        scanf("%d", &operator);
        if (operator < 1 || operator > 5) {
            printf("Parakalw dialekse enan arithmo apo to 1 ews to 5\n");
    }
    }while(operator<1 || operator>5);
    switch (operator)
    {
    case 1: addition(); break;
    // case 2: subtraction(); break;
    // case 3: multiplication(); break;
    // case 4: division(); break;
    // case 5: randoperation(); break;
    }
    return 0;
}

void addition(void){
    int n1 = 1+rand()%4; // min + rand()%(max-min+1)
    int n2 = 1+rand()%4;
    int ans;
    do{
        printf("Poso kanei: %d kai %d ?\n", n1,n2);
        scanf("%d", &ans);
        if (ans == n1+n2){
        printf("%s\n", RIGHT_RESP[rand()%4]);
        }
        else{
        printf("%s\n", WRONG_RESP[rand()%4]);
        }
    }while(ans!=n1+n2);
}