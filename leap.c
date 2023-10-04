#include <stdio.h>
int main(){
    int year ;
    scanf("%d",&year);
    // if (/* condition */)
    // {
    //     /* code */
    // }
    
    if (year%4==0 && year%100!=0 || year %400==0)
        {printf("leap year");}
    else{
        printf("not a leap year");
    }

}