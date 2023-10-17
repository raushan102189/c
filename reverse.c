#include <stdio.h>
int main(){
    int num,new_num,final;
    num  = 123334;
    final = num%10;
    new_num = num/10;
    int array[10]={};
    // do {
    //     new_num = new_num/10;
    //     printf("%d new number %d",new_num,final);
    //     array[]
        

    // }while(new_num !=0);
    size_t i = 0;
    int copy = i;
    for ( i; new_num!=0; i++)
    {
        // printf("%d\n",new_num);
        
        array[i]=new_num%10;
        new_num/=10;
    }

    printf("%zu\n",i);
    // printf("%d",array);
    for (size_t j = 1; j < i; i--)
    {
        // result += 

        printf("%d",array[i-2]);
    }
    printf("%d",array[ copy-2]);
}