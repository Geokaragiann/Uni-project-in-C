#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <math.h>

float round_to_two_decimals(float value) {
    return round(value * 100) / 100;
}

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
void subtraction();
void multiplication();
void division();
void randoperation();
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
    case 2: subtraction(); break;
    case 3: multiplication(); break;
    case 4: division(); break;
    case 5: randoperation(); break;
    }
    return 0;
}
  void addition(void) {
    int n1 = rand() % 6;
    int n2 = rand() % 6;
    float ans;

    do {
        printf("Poso kanei: %d kai %d ?\n", n1, n2);
        scanf("%f", &ans);

        float correct_result = round_to_two_decimals(n1 + n2);
        float user_answer = round_to_two_decimals(ans);

        if (user_answer == correct_result) {
            printf("%s\n", RIGHT_RESP[rand() % 4]);
        } else {
            printf("%s\n", WRONG_RESP[rand() % 4]);
        }
    } while (round_to_two_decimals(ans) != round_to_two_decimals(n1 + n2));
}
void subtraction(void) {
    int n1, n2;
    do {
        n1 = rand() % 6;
        n2 = rand() % 6;
    } while (n1 - n2 < 0);

    float ans;

    do {
        printf("Poso kanei: %d plin %d ?\n", n1, n2);
        scanf("%f", &ans);

        float correct_result = round_to_two_decimals(n1 - n2);
        float user_answer = round_to_two_decimals(ans);

        if (user_answer == correct_result) {
            printf("%s\n", RIGHT_RESP[rand() % 4]);
        } else {
            printf("%s\n", WRONG_RESP[rand() % 4]);
        }
    } while (round_to_two_decimals(ans) != round_to_two_decimals(n1 - n2));
}
void multiplication(void) {
    int n1 = rand() % 6;
    int n2 = rand() % 6;
    float ans;

    do {
        printf("Poso kanei: %d epi %d ?\n", n1, n2);
        scanf("%f", &ans);

        float correct_result = round_to_two_decimals(n1 * n2);
        float user_answer = round_to_two_decimals(ans);

        if (user_answer == correct_result) {
            printf("%s\n", RIGHT_RESP[rand() % 4]);
        } else {
            printf("%s\n", WRONG_RESP[rand() % 4]);
        }
    } while (round_to_two_decimals(ans) != round_to_two_decimals(n1 * n2));
}
void division(void) {
	int n2;
    int n1 =rand() % 6; // min + rand()%(max-min+1)
    do{
    n2 =rand() % 6;
    }while(n2==0);
    float ans;
    do {
        printf("Poso kanei: %d dia %d ?\n", n1, n2);
        scanf("%f", &ans);

        float correct_result = round_to_two_decimals(n1 / (float)n2);
        float user_answer = round_to_two_decimals(ans);

        if (user_answer == correct_result) {
            printf("%s\n", RIGHT_RESP[rand() % 4]);
        } else {
            printf("%s\n", WRONG_RESP[rand() % 4]);
        }
    } while (round_to_two_decimals(ans) != round_to_two_decimals(n1 / (float)n2));
}
void randoperation(void){
	int x=1+rand()%4;
	switch (x)
    {
    case 1: addition(); break;
    case 2: subtraction(); break;
    case 3: multiplication(); break;
    case 4: division(); break;
    }
}