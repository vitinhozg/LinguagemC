#include <stdio.h>

int main(){

    char cargo[15];

    printf("Digite o cargo e tecle Enter\n");
    scanf("%s",cargo);

    if(strcmp(cargo,"Diretor")==0){
        printf("O salario do diretor e R$ 15.000,00");
    }
    else if(strcmp(cargo, "gerente")==0){
        printf("O salario do gerente e R$ 12.000,00");
    }
    else if(strcmp(cargo, "analista")==0){
        printf("O salario do analista e R$ 8.000,00");    
    }
    else if(strcmp(cargo, "assistente")==0){
        printf("O salario do assistente e R$ 4.000,00");   
    }
    else if(strcmp(cargo, "auxiliar")==0){
        printf("O salario do auxiliar e R$ 2.000,00");    
    }
    else{
        printf("Não há salario");
    }
return 0;
}