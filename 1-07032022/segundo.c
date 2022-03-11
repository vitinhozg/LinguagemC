#include <stdio.h> //biblioteca standard de Input/Output
int main()
{
    char car;                                        
    printf("Digite um balor inteiro e ENTER\n");   // declara var. car do tipo char
    scanf("%c", &car);                            // mostra na tela
    printf("Caractere digitado e ' %c\n", car);  // %c para ler mostrar char 1 char
    return 0;
    // mostrou na tela valo de car lido 
} //fim main