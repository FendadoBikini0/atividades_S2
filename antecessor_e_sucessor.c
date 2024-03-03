#include <stdio.h>
#include <math.h>


int main(){
    int numero, antecessor, sucessor;
    
    puts("Digite um número para saber seu antecessor e sucessor:");
    scanf("%d",&numero);
    
    antecessor = numero - 1;
    sucessor = numero + 1;
    printf("O antecessor de %d é %d\n", numero, antecessor);
    printf("E o sucessor de %d é %d", numero, sucessor);
return 0;    
}