#include <stdio.h>

int main(){
    int altura, largura, comprimento;
    int volume;
    
    puts("Digite o valor de altura em centímetros");
    scanf("%d",&altura);
    
    puts("Digite a largura");
    scanf("%d",&largura);
    
    puts("Digite o comprimento");
    scanf("%d",&comprimento);
    
    volume = altura * largura * comprimento;
    
    printf("O volume é: %d cm³", volume);
    
return 0;    
}