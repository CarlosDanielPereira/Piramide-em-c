#include <stdio.h>
#include <stdlib.h>

int main (){
    int i,j, andares;
    printf("De quantos andares você quer a sua piramide: \n");
    scanf("%d", &andares);
    if(andares>0){
        for(i = 1; i<=andares; i++){
            for(j=1;j<=i;j++){
                printf("%d ", j);
            }
            printf("\n");
        }
    }
    else if(andares<0){
        for(i = -andares; i>=andares; i--){
            for(j=i;j>=1;j--){
                printf("%d ", j);
            }
            printf("\n");
        }
    }
    else
        printf("Número invalido");

    return 0;
}
