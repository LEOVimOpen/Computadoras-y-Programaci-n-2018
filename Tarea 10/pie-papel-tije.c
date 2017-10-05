#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void)
{
    system("clear");
    int jugada_del_ordenador, jugada_del_usuario;
    srand ((unsigned) time (NULL));
    printf ("¿Cál es tu jugada?\n");
    printf ("\t1.- Piedra\n");
    printf ("\t2.- Papel\n");
    printf ("\t3.- Tijera\n");
    printf ("\t: ");
    do {
        scanf ("%d", &jugada_del_usuario);
        if (jugada_del_usuario<1||jugada_del_usuario>3)
            printf ("Valor incorrecto. Ingréselo nuevamente: ");
    }
    while (jugada_del_usuario<1||jugada_del_usuario>3);
        jugada_del_ordenador=1+rand()%3;
        if(jugada_del_ordenador==1)
            printf ("Mi jugada es Piedra\n");
        if(jugada_del_ordenador==2)
            printf ("Mi jugada es Papel\n");
        if(jugada_del_ordenador==3)
            printf ("Mi jugada es Tijera\n");
        if(jugada_del_usuario==jugada_del_ordenador)
            printf ("Empate\n");
        if((jugada_del_usuario==1&&jugada_del_ordenador==3)||(jugada_del_usuario==2&&jugada_del_ordenador==1)||(jugada_del_usuario==3&&jugada_del_ordenador==2))
            printf ("Gana usuario\n");
        if((jugada_del_usuario==3&&jugada_del_ordenador==1)||(jugada_del_usuario==1&&jugada_del_ordenador==2)||(jugada_del_usuario==2&&jugada_del_ordenador==3))
        printf ("Gana la compu\n");
        return 0;
}
