/**
 * @file rand_seed.c
 * @author Domenic
 * @brief Random number generator with seed as input to solve Broken Password Safe CTF
 * @version 0.1
 * @date 2022-01-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int seed = 0;
    scanf("%d", &seed); // scans for user input as a seed number
    srand(seed);
    printf("%d\n", rand()); // prints random number with seed input
    return 0;
}