#include <stdio.h>

int main(){
    int horas, minutos, segundos, total;
//Recebe os valores iniciais a serem convertidos    
    puts("Digite primeiro apenas a quantidade de horas a serem convertidas");
    scanf("%d",&horas);
    
    puts("Da mesma forma, digite a quantidade de minutos");
    scanf("%d",&minutos);
    
    puts("Agora, a quantidade de segundos");
    scanf("%d",&segundos);
    
    total = (horas * 3600) + (minutos * 60) + segundos;
    
    printf("O total de segundos é: %d\n", total);
    
return 0;    
}