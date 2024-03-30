#include <stdio.h>
float cuadradoNumero(float numero);
void cuadradoVoid(float numero);
void invertir(float a, float b); //deberá devolver en el valor de a en la variable b, y en el valor de b el valor de a
void orden(float a, float b); //deberá devolver en el valor de a el valor más chico, y en el valor de b el valor más grande

int main(int argc, char const *argv[])
{
    float numero, cuadrado,a, b;
    printf("Ingrese un numero\n");
    scanf("%f", &numero);
    cuadrado= cuadradoNumero(numero);
    printf("el cuadrado del numero es %.1f\n", cuadrado);
    cuadradoVoid(numero);
    printf("ingrese un numero 'a': ");
    scanf("%f", &a);
    printf("el valor almacenado en 'a es '%.1f y la direccion de memoria de la variable es: %p\n", a, &a);
    printf("ingrese un numero 'b': ");
    scanf("%f", &b);
    printf("el valor almacenado en 'a es '%.1f y la direccion de memoria de la variable es: %p\n", b, &b);
    invertir(a, b);
    orden(a, b);
    return 0;
}

float cuadradoNumero(float numero){
return(numero*numero);
}
void cuadradoVoid(float numero){
    printf("el cuadrado del numero con void es %.1f\n", numero * numero);
}
void invertir(float a, float b){
    float aux;
    aux=a;
    a=b;
    b=aux;
    printf("\nValores invertidos: el nuevo  valror de 'a' es: %.1f y el valor de 'b es %.1f'\n", a, b);

}
void orden(float a, float b){
if (a<b)
{
    printf("el valor de a es %.1f y evalor de b es %.1f", a, b);
}

if ( a>=b)
{
    //invertir(a,b);
    float aux;
    aux=a;
    a=b;
    b=aux;
    printf("El valor de a es %.1f y evalor de b es %.1f", a, b);
}

}