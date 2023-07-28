#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void rand_string(char* str , int num)
{

    {
	   for (int i=0 ; i<num ; i++)
	   str[i] = rand() % ('f' - 'a' + 1) +'a';
    }
    str[num] = 0;
}


int main(int argc , char* argv[])
{

srand(time(NULL));
char str[11];
rand_string(str, 10);
printf("The Randomly Generated Alphanumeric Character is %s\n\n", str);
return 0;
}
