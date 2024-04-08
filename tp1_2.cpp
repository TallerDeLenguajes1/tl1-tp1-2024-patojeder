#include <stdio.h>
float cuadradoNumero(float numero);
void cuadradoVoid(float numero);
void invertir(float *a, float *b); //deberá devolver en el valor de a en la variable b, y en el valor de b el valor de a
void orden(float *a, float *b); //deberá devolver en el valor de a el valor más chico, y en el valor de b el valor más grande

int main(int argc, char const *argv[])
{
    float numero, cuadrado,a, b;
    printf("\nIngrese un numero\n");
    scanf("%f", &numero);
    cuadrado= cuadradoNumero(numero);
    printf("\nel cuadrado del numero es %.1f\n", cuadrado);
    cuadradoVoid(numero);
    printf("\ningrese un numero 'a': ");
    scanf("%f", &a);
    printf("\nel valor almacenado en 'a es '%.1f y la direccion de memoria de la variable es: %p\n", a, &a);
    printf("\ningrese un numero 'b': ");
    scanf("%f", &b);
    printf("\nel valor almacenado en 'a es '%.1f y la direccion de memoria de la variable es: %p\n", b, &b);
    invertir(&a, &b);
    printf("\nValores invertidos: el nuevo  valor de 'a' es: %.1f y el valor de 'b es %.1f'\n", a, b);
    printf("\ningrese un numero 'a': ");
    scanf("%f", &a);
    printf("\ningrese un numero 'b': ");
    scanf("%f", &b);
    orden(&a, &b);
    return 0;
}

float cuadradoNumero(float numero){
return(numero*numero);
}
void cuadradoVoid(float numero){
    printf("el cuadrado del numero con void es %.1f\n", numero * numero);
}
void invertir(float *a, float *b){
    float aux;
    aux=*a;
    *a=*b;
    *b=aux;
}
void orden(float *a, float *b){
if ((*a)<(*b))
{
    printf("el valor de a es %.1f y evalor de b es %.1f", *a, *b);
}

if ( (*a)>=(*b))
{
    invertir(a,b);
    //float aux;
   // aux=a;
   // a=b;
    //b=aux;
    printf("El valor de a es %.1f y evalor de b es %.1f", *a, *b);
}

}