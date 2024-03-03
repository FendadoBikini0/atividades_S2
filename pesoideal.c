#include <stdio.h>

int main(){
    float altura, peso_ideal;
    int sexo;
//Recebe a altura do usuário    
    puts("Digite sua altura (em metros) para saber seu peso ideal:");
    scanf("%f",&altura);
    
    puts("Agora informe qual o seu sexo (1 - masculino; 2- feminino)");
    scanf("%d",&sexo);
    
    if (sexo == 1){
        peso_ideal = (altura * 72.7) - 58;     
    } else {
        peso_ideal = (altura * 62.1) - 44.7;
    }
    printf("O seu peso ideal é: %.2f", peso_ideal);
    
return 0;    
}