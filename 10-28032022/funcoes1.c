/*
Programa para trabalha com funções. Vamos usar funções em
retorno. sem retorno, com argumentos(pârametros), sem argumentos
*/
#include <stdio.h>
#include <stdlib.h>

void separadorHT(){
    for(int i = 0 ; i <= 50 ; i++){
        printf("#");
    }
    printf("\n");
}
void separadorLinha(){
    for(int i = 0 ; i <= 50 ; i++){
        printf("_");
    }
    printf("\n");   
}

void pularLinha(int qtdVezes){
    for(int i = 1 ; i <= qtdVezes; i++){
        printf("\n");
    }
}

void comparar(int v1, int v2){
    if(v1 > v2){
        printf("O primeiro número é maior que o segundo");
    }
    else if(v1 = v2){
        printf("O primeiro número é igual ao segundo número");
    }
    else{
        printf("O segundo número é maior que o primeiro");
    }

}



void main(){
    int n1,n2;
    system("clear");//limpar a tela do terminal
    //chamando a função separadorHT
    separadorHT();
    printf("\n\t\tPrograma que exibe uma mensagem\n");
    //chamando a função separadorLinha
    separadorLinha();
    pularLinha(2);
    printf("Digite um número:\n");
    scanf("%d",&n1);
    printf("Digite outro número:\n");
    scanf("%d",&n2);

    pularLinha(1);

    comparar(n1,n2);

    pularLinha(1);
}