#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float x, y, conta;
    char op;
    printf("Digite: número op número\n");
    scanf("%f %c %f", &x, &op, &y);
    switch(op)
    {
    case '*':
        printf("O resultado da multiplicação dos dois números escolhidos é %.2f", x*y);
    break;
    case '-':
        printf("O resultado da conta %.2f-%.2f é igual a %.2f", x, y, x-y);
    break;
    case '+':
        printf("A soma entre os dois números escolhidos resulta em %.2f", x+y);
    break;
    case '/':
        if (y!=0)
            printf("A divisão entre %.2f e %.2f é igual a %.2f", x, y, x/y);
        else
            printf("Não existe divisão por 0");
    }
    printf("programa atualizado\n");
    printf("versão 1.2");
    return 0;
}
