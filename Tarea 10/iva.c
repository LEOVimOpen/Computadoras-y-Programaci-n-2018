#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("clear");
    float precio, iva,subtotal, total;
        printf("\nCalcular IVA de un producto\n\n");
        printf("\nEscriba el precio del producto: ");
        scanf("%f", &precio);
        iva=precio*0.16;
        total=precio+iva;
        subtotal=precio/1.16;
        printf("El valor del IVA del producto es de: %.2f\n",iva);
        printf("El valor del producto con el IVA incluido es de: %.2f\n",total);
        printf("El subtotal del producto es de: %.2f\n",subtotal);
}
