#include<stdio.h>
int main(){
    printf("Hola mundo\n");
     int valor=5;
    int *p_valor=&valor;

    printf("El contenido del puntero %d\n",*p_valor);
    printf("La direccion de memoria almacenada por el puntero %p\n", p_valor);
    printf("la direccion de memoria de la variable %p\n",&valor);
    printf("la direccion de memoria del puntero %p\n",&p_valor);
    printf("el tamanio de memoria de la variable %d\n",sizeof(valor));    
    return 0;
}