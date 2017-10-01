#include <stdio.h>
#include <stdlib.h>
int main() {
    int p=0;
    system("clear");
    printf("Este programa pide un número entero y dice si es par o impar \n\n");
    printf("Dame un número: \n\n");
    scanf("%i",&p);
    if(p%2==0)
        printf("El número %i es par\n",p);
    else
        printf("El número %i es impar\n",p);
}
