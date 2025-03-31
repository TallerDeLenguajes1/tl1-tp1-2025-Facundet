#include <stdio.h>

int cuadradoDeUnNumero(int numero);
void cuadradoDeUnNumeroVoid(int numero);
void Invertir(int a, int b);
void orden(int a, int b);


int main(void)
{
    int variable, a, b, c, d;
    printf("Ingrese una variable para mostrar su direccion y contenido por pantalla: \n");
    scanf("%d", &variable);
    printf("Direccion de la variable: %p\n", &variable);
    printf("Contenido de la variable: %d\n", variable);

    // --------------------

    printf("Ingrese los valores para INVERTIR las variables: \n");
    printf("Variable a: \n");
    scanf("%d", &a);
    printf("Variable b: \n");
    scanf("%d", &b);
    Invertir(a, b);

    // -------------------
    printf("Ingrese el valor de a: \n");
    scanf("%d", &c);
    printf("Ingrese el valor de b: \n");
    scanf("%d", &d);

    printf("Valores de a: %d y b: %d antes de ser ordenados de menor a mayor\n", c, d);
    orden(c,d);


    return 0;
}

int cuadradoDeUnNumero(int numero)
{
    int cuadrado;
    cuadrado = numero * numero;
    return(cuadrado);
}

void cuadradoDeUnNumeroVoid(int numero)
{
    int cuadrado;
    cuadrado = numero * numero;
    printf("El cuadrado de %d, es %d", numero, cuadrado);
}

void Invertir(int a, int b)
{
    int bandera = a;
    a = b;
    b = bandera;
    printf("El valor de la variable a es: %d, El valor de la variable b es: %d\n", a, b);
}

void orden(int a, int b)
{
    if (a < b){
        printf("Valor de a: %d\nValor de b: %d\n", a, b);
    } else if (a > b)
    {
        int bandera = a;
        a = b;
        b = bandera;
        printf("Valor de a: %d\nValor de b: %d\n", a, b);
        }
    
}