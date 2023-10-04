
#include <stdio.h>
int factorialloop(int n);
int factorialrecurction(int n);
int main(){
    int n,result ;
    printf("enter numer between (1 -100) only you know the reason ok:");
    scanf("%d",&n);
    // result = factorialloop(n);
    printf("factorial of %d is %d",n,result);

}
// factorialloop using loop
int factorialloop(int a){
    int answ;
    answ = 1;
    for (size_t i = a; i >= 1; i--)
    {
        answ*=i;
    }
    return answ;
    
}
//factoriall using recurction
