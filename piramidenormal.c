#include <stdio.h>
#include <stdlib.h>

int main (){
    int i,j, k, andares;
    printf("De quantos andares você quer a sua piramide: \n");
    scanf("%d", &andares);
    if(andares>0){
        for(i = 0; i<=andares; i++){
            for(j=i;j<andares;j++){
                printf(" ");
            }
            printf("/");
            for(k=0; k<i*2; k++){
                if(k%2==0 || i==1){
                    printf("_");
                }
                else{
                    printf("|");
                }
            }
            printf("\\ \n");
        }
    }
    else if(andares<0){
        for(i =-andares; i>=0; i--){
            for(j=-i;j>andares;j--){
                printf(" ");
            }
            printf("\\");
            for(k=0; k<i*2; k++){
                if(k%2==0 || i==0){
                    printf("_");
                }
                else{
                    printf("|");
                }
            }
            printf("/\n");
        }
    }
    else
        printf("Número invalido");

    return 0;
}
