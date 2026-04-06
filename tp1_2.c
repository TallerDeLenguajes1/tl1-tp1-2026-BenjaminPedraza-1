#include<stdio.h>
int cuadradoNumero(int numero);
void numeroCuadrado(int n,int *resultado);
void invertir(int *a,int *b);
void orden(int *a, int *b);
int main(){
    int numero=10;
    int *p_numero=&numero;
    int n=5;
    int *p_n=&n;
    int resultado;
    int cuadrado=cuadradoNumero(numero);
    printf("Punto A)\n");
    printf("El cuadrado de %d es %d\n",numero,cuadrado);
    numeroCuadrado(n, &resultado);
    printf("Punto B)\n");
    printf("El cuadrado de %d es %d\n",n,resultado);
    printf("Punto C)\n");
    printf("El contenido del puntero %d\n",*p_numero);
    printf("la direccion de memoria de la variable %p\n", &numero);
    printf("El contenido del puntero %d\n",*p_n);
    printf("la direccion de memoria de la variable %p\n", &n);
    printf("Punto D)\n");
    printf("Valores antes de invertir,primero:%d,segundo:%d\n",numero,n);
    invertir(&numero,&n);
    printf("Valores despues de invertir,primero:%d,segundo:%d\n",numero,n);
    printf("Punto E)\n");
    printf("Valores antes,primero:%d,segundo:%d\n",numero,n);
    orden(&numero,&n);
    printf("Valores despues,primero:%d,segundo:%d",numero,n);
  return 0;  
}
int cuadradoNumero(int numero){
    int valor=numero*numero;
return valor;
}
void numeroCuadrado(int n,int *resultado){
    *resultado=n*n;
}
void invertir(int *a,int *b){
    int aux=*a;
    *a=*b;
    *b=aux;
}
void orden(int *a, int *b) {
    int aux;
    if (*a > *b) {
        aux = *a;
        *a = *b;
        *b = aux;
    }
}