#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float x, y, conta;
    char op;
    printf("Digite: n�mero op n�mero\n");
    scanf("%f %c %f", &x, &op, &y);
    switch(op)
    {
    case '*':
        printf("O resultado da multiplica��o dos dois n�meros escolhidos � %.2f", x*y);
    break;
    case '-':
        printf("O resultado da conta %.2f-%.2f � igual a %.2f", x, y, x-y);
    break;
    case '+':
        printf("A soma entre os dois n�meros escolhidos resulta em %.2f", x+y);
    break;
    case '/':
        if (y!=0)
            printf("A divis�o entre %.2f e %.2f � igual a %.2f", x, y, x/y);
        else
            printf("N�o existe divis�o por 0");
    }
    printf("programa atualizado\n");
    printf("vers�o 1.2");
    return 0;
}
