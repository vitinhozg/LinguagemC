/*
Programa para calcular cpf do usuário.
Quando inserido, pegamos os 9 primeiros
digitos e passamos para o calculo.
é utilizado um numero por vez do cpf
multiplicando pelo peso partindo
de 10 até 2
Na segunda parte do calculo pegamos os 9
primeiros mais o digito encontrados e
multiplicamos pelo peso a partir de 
11. Soma se os valores encontrados e
dividimos por 11. Se o resto da divisão
for menor que 2, então o digito será
0; caso contrário o resto será subtraido
por 11
*/
#include <stdio.h>

int main(){

    int peso10 = 10;
    int peso11 = 11;
    int total = 0;
    int resto = 0;
    char cpf [11];
    system("clear");
    printf("Digite o seu cpf sem o traço: \n");
    scanf("%s",cpf);

    /*converte todos os caracteres do cpf
    para número. Para isso devemos cria um
    conjunto de numeros em tipo int e
    realizar a conversão usando for*/

    int iCpf[11];
    for(int x = 0 ; x <= 10 ; x++){
        iCpf[x] = cpf[x] - 48;
    } 

    for(int i = 0 ; i <= 8 ; i++){
        total += iCpf[i]*peso10;
        peso10--;
    }

    resto = total % 11;
    /*
    se o resto da divisão for menor que 2, entao
    o primeiro digito de verificacão será 0(zero)
    */
   if(resto< 2){
       iCpf[9]=0;
    }
    else
        iCpf[9] = 11 - resto;
    }
    total = 0;
    resto = 0;


    for(int i = 0 ; i <= 9 ; i++){
        total +=iCpf[i]*peso11;
        peso11--;
    }
    resto = total % 11;
    if(resto < 2){
        iCpf[10] = 0;
    }
    else{
        iCpf[10] = 11-resto;
    }

    for(int i = 0 ; i <= 10 ; i++){
        printf("%d",iCpf[i]);
    }
    printf("\n");

    return 0;
}