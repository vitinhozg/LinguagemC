#include <stdio.h> //biblioteca standard de input output
int main()
{
    int n1,n2,rs;
    
    printf("Digite um Número\n");
    scanf("%d",&n1);
    printf("Digite outro número\n");
    scanf("%d",&n2);
    rs = n1 % n2;
    printf("O resultado é %d",rs);

    return 0;
}