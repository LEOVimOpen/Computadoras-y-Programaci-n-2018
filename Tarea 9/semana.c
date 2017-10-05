#include <stdio.h>
#include <stdlib.h>
int main() {
    int r=0;
    system("clear");
    printf("Este programa te indica el día de la semana de acuerdo al número que le des\n\n");    printf("Dame un número: \n");
    scanf("%i",&r);
    if(r<=7){
        switch(r){
            case 1: printf("El número %i corresponde a Domingo",r);
            break;
            case 2: printf("El número %i corresponde a Lunes",r);
            break;
            case 3: printf("El número %i corresponde a Martes",r);
            break;
            case 4: printf("El número %i corresponde a Miércoles",r);
            break;
            case 5: printf("El número %i corresponde a Jueves",r);
            break;
            case 6: printf("El número %i corresponde a Viernes",r);
            break;
        }
    }
    else{
        printf("ERROR: Opción incorrecta");
    }
}
