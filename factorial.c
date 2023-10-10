
#include <stdio.h>
int factorialloop(int n);
int factorialrecurction(int n);
int main(){
    int n;
    double result ;
    printf("enter numer between (1 -15) only you know the reason ok: ");
    scanf("%d",&n);
    result = factorialrecurction(n);
    printf("factorial of %d is %lf",n,result);

}

// factorialloop using loop
// int factorialloop(int a){
//     int answ;
//     answ = 1;
//     for (size_t i = a; i >= 1; i--)
//     {
//         answ*=i;
//     }
//     return answ;
    
// }
//factoriall using recurction
int factorialrecurction(int n){
    if (n==0){
        return 1;

    }else{
        return n*factorialrecurction(n-1);
    }
}
