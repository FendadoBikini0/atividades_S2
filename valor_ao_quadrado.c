#include <stdio.h>
#include <math.h>


int main(){
    int valor, expoente;
    double resultado;
    
    expoente = 2;
    puts("Digite qualquer valor inteiro para saber qual o seu quadrado:");
    scanf("%d",&valor);
    
    resultado = pow(valor, expoente);
    printf("O valor de %d ao quadrado é %.1lf", valor, resultado);
return 0;    
}