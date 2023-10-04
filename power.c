#include <stdio.h>
int main(){
    printf("this is for power calculation using for loop \n");
    
    int num = 2;
    int pow = 2;
    double ans=1.0;
    printf("enter your numer: ");
    scanf("%d",&num);
    printf("enter power: ");
    scanf("%d",&pow);

    for (size_t i = 0; i < pow; i++)
    {
        ans*=num;
    }
    printf("%lf",ans);
}