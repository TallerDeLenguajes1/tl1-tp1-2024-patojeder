#include <stdio.h>

int main(){
    printf("hola mundo");
    int *puntero;
    int numero=5;
    puntero= &numero;
    int tamanio=sizeof(int);
    printf("El contenido del puntero %d\n", *puntero );
    printf(" La dirección de memoria almacenada por el puntero %p\n", puntero);
    printf("la dirección de memoria de la variable %p\n", &numero);
    printf("la dirección de memoria del puntero. %p\n", &puntero);
    printf("tamanio de memoria ocupada %d", tamanio);
}