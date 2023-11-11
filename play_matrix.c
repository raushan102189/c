#include <stdio.h>
int main(){
    int a[2][3] ={{1,2,3},{4,5,6}} ;
    int b[2][3] ={{1,2,3},{4,5,6}} ;
    for (size_t i = 0;i<2;i++){
        for (size_t j = 0;j<3;j++){
            printf("%d \t",a[i][j]+b[i][j]);
        }
    printf("\n");
    }

}
