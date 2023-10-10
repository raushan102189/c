#include <stdio.h>
int sum(int a,int b);
int main(){
    // int x = printf("\n");
    int first = 10;
    int second = 20;
    sum(first,second);
    int result =   sum(first,second);
    printf("%d",result);


    return 0;

    }

int sum(int a ,int b){
    return a+b;
}
