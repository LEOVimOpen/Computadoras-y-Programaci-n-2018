#include <stdio.h>
#include <stdlib.h>
int main() {
    int p=0;
    int r=0;
    system("clear");
    printf("Este programa pide un número y muestra en pantalla el mismo número de asteriscos\n\n");
    printf("Dame un número: \n\n");
    scanf("%i",&p);
    for(r=1;r<=p;r++)
        printf("*");
}
