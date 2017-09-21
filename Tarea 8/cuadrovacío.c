#include <stdlib.h>
int main() {
    int m=0;
    int n=0;
    system("clear");
    printf("Este programa muestra un cuadrado  de 6x6 echo con un margen de +\n\n");
    for(m=1;m<=6;m++){
        for(n=1;n<=6;n++){
            if((m>1 && n>1) && (m<6 && n<6)){
                printf(" ");
                }   
            else
            printf("+");
        }   
        printf("\n");
    }   
}
