#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int num(int min,int max)   
{
    return rand()%(max-min+1)+min;
}
 char hexa_decimal()
     {
    char hexa_decimal[] ="abcdef0123456789";     
    int input =num(0,sizeof(hexa_decimal))-2;
     
     return hexa_decimal[input];
 }
 int main() 
 {
    srand (time(NULL));
        char m[51][11];
       
        for (int i = 0; i < 51; i++) 
        { 
            int length =num(3, 10); 
            for(int j=0;j<length;j++)
               {
                  m[i][j]=hexa_decimal();
              
               }
        
               
                 m[i][length]= '\0';
        }

        printf(" \n");
        for (int i=0;i<51;i++)
        {
            printf(" %s\n",m[i]);
        }
         return 0;

        

 }
