/**
 * @file broken_pwsafe.c
 * @author Domenic
 * @brief CTF Challenge called Broken Password Safe
 * @version 0.1
 * @date 2022-01-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Global variable declaration
int new_pw = 0;

// Passwort generator with time as seed
int pw_generator(int i){
    srand(i);
    new_pw = rand();
    return new_pw;
}

// Reveal safe contents
void reveal_contents(){
    printf("FLAG{your safe is now open again}\n");
}

// Main function for user interaction
void main(){
    // Define function variables
    char unimportant[50]; // placeholder for first user input
    time_t now; // current time
    now = time(NULL);
    int user_input = 0;

    printf("*********************\n");
    printf("*** Password Safe ***\n");
    printf("*********************\n");
    printf("Enter your password:\n");
    scanf("%s", unimportant); // let user input a random password (for confusion..)

    pw_generator(now); // call password generator with current time

    printf("Error: "); // print the current time (seed) as an error
    printf("%ld\n", now);
    printf("Your password safe has been compromised! A new numeric password has been set.\n");

    printf("Enter your new password:\n"); // user input with the self generated number
    scanf("%d", &user_input);

    if(user_input == new_pw) // if the user input matches the programs random number, the flag is printed
        reveal_contents();
    else
        printf("Wrong passsword! Abord.\n");
}