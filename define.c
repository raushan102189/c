#include <stdio.h>
# define NEW() 10*n
#undef NEW
#define NEW() "doesthiswork"
int main(){
    int n = 10;
    printf("%s",NEW());
    
    return 0;

}
