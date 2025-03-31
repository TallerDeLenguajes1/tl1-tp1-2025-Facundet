#include <stdio.h>

int main(void)
{
    //------- PUNTO A -------
    printf ("hola mundo");

    //------ PUNTO E -------

    char frase[] = "soy un puntero";
    char *puntero = frase;

    printf ("Contenido del puntero: %s\n", puntero);
    printf ("Direccion de memoria almacenada en el puntero: %p\n",puntero);
    printf ("Direccion de memoria de la variable: %p\n", &frase);
    printf ("Direccion de memoria del puntero %p\n", &puntero);
    printf ("Tamanio de la memoria usado por la variable: %zu bytes\n", sizeof(puntero));

    return 0;
}