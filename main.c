#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_TYPE

int main (void) {
    
    time_t t;
    int password_length = 10;
    int user_input;
    int index = 0;
    
    char all[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789/,.-+=~`<>:";
    char lower_upper[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lower_upper_number[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char lower_upper_number_symbol[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789/,.-+=~`<>:";
    char alphabet_lower[] = "abcdefghijklmnopqrstuvwxyz";
	char alphabet_upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char number[] = "0123456789";
	char special_symbol[] = "/,.-+=~`<>:";
	
    // void srand(unsigned int seed)
    // seed - this is an integer value used as seed by the pseudo-random number generator algorithm
    
    // initialize random number generator
	//srand((unsigned int)(time(NULL)));
	srand((unsigned) time(&t));
    
    printf("Please select an option for password:\n");
    printf("1 - low\n"); 
    printf("2 - low + high\n");
    printf("3 - low + high + number\n");
    printf("4 - low + high + number + symbol\n");
    scanf("%d", &user_input);  
    printf("User input was = %d\n",user_input);
    
    if (user_input == 1) {
        // lower case alphabet only
        for(index = 0; index < password_length; index++) {
		    printf("%c", alphabet_lower[rand() % (sizeof alphabet_lower - 1)]);
	    }
    	puts("");
    	return 0;
        
    } else if (user_input == 2) {
        // lower + upper
        char selected_char_set[strlen(lower_upper)];
        strcpy(selected_char_set, lower_upper);
        for(index = 0; index < password_length; index++) {
		    printf("%c", selected_char_set[rand() % (sizeof selected_char_set - 1)]);
	    }
    	puts("");
    	return 0;
        
    } else if (user_input == 3) {
        // low + upper + number
        char selected_char_set[strlen(lower_upper_number)];
        strcpy(selected_char_set, lower_upper_number);
        for(index = 0; index < password_length; index++) {
		    printf("%c", selected_char_set[rand() % (sizeof selected_char_set - 1)]);
	    }
    	puts("");
    	return 0;
        
    } else if (user_input == 4) {
       // low + upper + number + special symbol 
        char selected_char_set[strlen(lower_upper_number_symbol)];
        strcpy(selected_char_set, lower_upper_number_symbol);
        for(index = 0; index < password_length; index++) {
		    printf("%c", selected_char_set[rand() % (sizeof selected_char_set - 1)]);
	    }
    	puts("");
    	return 0;
    }

}