
#include <stdio.h>
double factorialloop(int n);
double factorialrecursion(int n);
int main(){
    int n;
    double result ;
    printf("enter a numer: ");
    scanf("%d",&n);
    // result = factorialrecursion(n);
    result = factorialloop(n);
    printf("factorial of %d is %lf",n,result);

}

// factorialloop using loop
double factorialloop(int a){
    double answ;
    answ = 1;
    for (size_t i = a; i >= 1; i--)
    {
        answ*=i;
    }
    return answ;
    
}
//factoriall using recurction
// double factorialrecursion(int n){
//     if (n!=0){
//     return n*factorialrecursion(n-1);

//     }else{
//        return 1;
//     }
// }
