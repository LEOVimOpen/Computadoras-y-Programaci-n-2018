/*Compilado con gcc en in editor vim para linux*/
#include <stdio.h>
#include <stdlib.h>
   int main()
   {
    int m=0;
    int n=0;
    int o=0;
    system("clear");
    printf("Este programa nos dice cual es el menor de tres números enteros positivos. Solo si son diferentes entre si.\n\n");
    printf("Introduce el primer número entero\n");
    scanf("%d",& m);
    printf("Introduce el segundo número entero\n");
    scanf("%d",& n);
    printf("Introduce el tercer número entero\n");
    scanf("%d",& o);
    if((m!=n && m!=o && n!=o)&&((m && n && o)>0))
    {
        if(m<n && m<o)
        {
            printf("\n%i es menor",m);
            printf("\n\nFIN DEL PROGRAMA\n");
        }
        else
        {   
            if(n<m && n<o)
            {
                printf("\n%i es menor",n);
                printf("\n\nFIN DEL PROGRAMA\n");
            }
            else
            {   
                printf("\n%i es menor",o);
                printf("\n\nFIN DEL PROGRAMA\n");
            }
        }   
    }           
    else        
        printf("\nERROR: Deben ser números enteros positivos y diferentes entre si\n");
}
