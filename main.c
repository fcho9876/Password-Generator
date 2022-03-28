#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "functions.h"

int main(void) {
    int user_input_loop = 1;
    while(user_input_loop == 1) {
        read_user_input();
        read_length();
        select_password_type();
        printf("Go again? 1 = Yes, 0 = No \n");
        scanf("%d", &user_input_loop);
    }
}
