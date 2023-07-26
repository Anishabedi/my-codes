#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    srand(time(NULL));
    int randomnum = rand() % 6;
    
    char charset[] = "ABCDEF";
    
    char randomchar = charset[randomnum];
    
    printf("The Randomly generated character is %c.\n", randomchar);

    return 0;
}
