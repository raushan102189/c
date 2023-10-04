#include <stdio.h>
int main(){
    int n = 80;
    int star = 1;
    // for (size_t o = 0 <)
    for (size_t i = 0; i < 5; i++)
    {

        for (size_t i = 0; i < n; i++)
        {
            printf(" ");
        }
        for (size_t i = 0; i < star; i++)
        {
            printf("*");
        }
        
        printf("\n");
        n--;
        star +=2;

        /* code */
    }
    
   
}