#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    srand(atoi(argv[1]));
    printf("%d\n", rand());
    return 0;
}