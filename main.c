#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <math.h>

float round_to_two_decimals(float value) {
    return (int)(value * 100) / 100.0;
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
    puts("Telos programmatos! Mpravo!");
    return 0;
}

// ------------FUNCTIONS------------

  void addition(void) {
    int correct=0;
    float ans;
    do {
        int n1, n2;
        if(correct<8) {
            n1 = rand() % 6;
            n2 = rand() % 6;
        } else if(correct>16) {
            n1 = rand() % 11;
            n2 = rand() % 11;
        } else {
            n1 = 3 + rand() % 6;
            n2 = 3 + rand() % 6;
        }
        int attempts = 0;
        float correct_result = round_to_two_decimals(n1 + n2);
        
        do {
            printf("Poso kanei: %d kai %d ?\n", n1, n2);
            scanf("%f", &ans);

            float user_answer = round_to_two_decimals(ans);

            if (user_answer == correct_result) {
                printf("%s\n", RIGHT_RESP[rand() % 4]);
                correct++;
                break;
            } else {
                if(attempts == 2) {
                    printf("Prospathise na thymase oti: %d kai %d mas kanei %d\n", n1, n2, correct_result);
                    break;
                }
                printf("%s\n", WRONG_RESP[rand() % 4]);
                attempts++;
            }
        } while(1);
    } while(correct<=24);
}
void subtraction(void) {
    int correct = 0;
    float ans;
    do {
        int n1, n2;
        if(correct < 8) {
            n1 = rand() % 6;
            n2 = rand() % 6;
            while (n1 - n2 < 0) {
                n1 = rand() % 6;
                n2 = rand() % 6;
            }
        } else if(correct > 16) {
            n1 = rand() % 11;
            n2 = rand() % 11;
            while (n1 - n2 < 0) {
                n1 = rand() % 11;
                n2 = rand() % 11;
            }
        } else {
            n1 = 3 + rand() % 6;
            n2 = 3 + rand() % 6;
            while (n1 - n2 < 0) {
                n1 = 3 + rand() % 6;
                n2 = 3 + rand() % 6;
            }
        }

        int attempts = 0;
        float correct_result = round_to_two_decimals(n1 - n2);
        
        do {
            printf("Poso kanei: %d plin %d ?\n", n1, n2);
            scanf("%f", &ans);

            float user_answer = round_to_two_decimals(ans);

            if (user_answer == correct_result) {
                printf("%s\n", RIGHT_RESP[rand() % 4]);
                correct++;
                break;
            } else {
                if(attempts == 2) {
                    printf("Prospathise na thymase oti: %d plin %d mas kanei %d\n", n1, n2, correct_result);
                    break;
                }
                printf("%s\n", WRONG_RESP[rand() % 4]);
                attempts++;
            }
        } while(1);
    } while(correct <= 24);
}
void multiplication(void) {
    int correct = 0;
    float ans;
    do {
        int n1, n2;
        if(correct < 8) {
            n1 = rand() % 6;
            n2 = rand() % 6;
        } else if(correct > 16) {
            n1 = rand() % 11;
            n2 = rand() % 11;
        } else {
            n1 = 3 + rand() % 6;
            n2 = 3 + rand() % 6;
        }

        int attempts = 0;
        float correct_result = round_to_two_decimals(n1 * n2);
        
        do {
            printf("Poso kanei: %d fores to %d ?\n", n1, n2);
            scanf("%f", &ans);

            float user_answer = round_to_two_decimals(ans);

            if (user_answer == correct_result) {
                printf("%s\n", RIGHT_RESP[rand() % 4]);
                correct++;
                break;
            }else{
                if(attempts==2){
                    printf("Prospathise na thymase oti: %d fores to %d mas kanei %d\n", n1, n2, correct_result);
                    break;
                }
                printf("%s\n", WRONG_RESP[rand() % 4]);
                attempts++;
            };
        }while(1);

    } while(correct <= 24);
}
void division(void) {
    int correct = 0;
    int ans;
    do {
        int n1, n2;
        if(correct < 8) {
            n1 = 1 + (rand() % 5);
            n2 = 1 + (rand() % 5);
            while(n2 > n1) {
                n2 = 1 + (rand() % 5);
            }
        } else if(correct > 16) {
            n1 = 1 + (rand() % 10);
            n2 = 1 + (rand() % 10);
            while(n2 > n1) {
                n2 = 1 + (rand() % 10);
            }
        } else {
            n1 = 3 + (rand() % 6);
            n2 = 3 + (rand() % 6);
            while(n2 > n1) {
                n2 = 3 + (rand() % 6);
            }
        }

        int attempts = 0;
        int correct_result = n1 / n2;
        
        do {
            printf("poses fores xwraei to %d sto %d?\n", n2, n1);
            scanf("%d", &ans);

            if (ans == correct_result) {
                printf("%s\n", RIGHT_RESP[rand() % 4]);
                correct++;
                break;
            } else {
                if(attempts == 2) {
                    printf("Prospathise na thymase oti to %d xwraei %d fores sto %d\n", n2, correct_result, n1);
                    break;
                }
                printf("%s\n", WRONG_RESP[rand() % 4]);
                attempts++;
            }
        } while(1);

    } while(correct <= 24);
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