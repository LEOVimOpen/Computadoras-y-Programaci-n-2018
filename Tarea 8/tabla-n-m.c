#include <stdio.h>
#include <stdlib.h>
int main() {
    int p=0;
    int q=0;
    int r=0;
    system("clear");
    printf("Este programa imprime la tabla desde el numero p hasta q\n\n");
    printf("Ingresa en primer número (este número debe ser menor)\n");
    scanf("%i",&p);
    printf("Escribe el segundo número (este número debe ser mayor)\n");
    scanf("%i",&q);
    if(p<q){
        for(p=p;p<=q;p++){
            for(r=1;r<=10;r++){
                printf("%i x %i = %i \n",p,r,p*r);
            }   
            printf("\n");
        }   
    }   
    else{
        printf("ERROR: El primer núumero tiene que ser mayor");
    }   
}
