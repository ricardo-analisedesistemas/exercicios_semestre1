#include<stdio.h>
int main(int argc, char const *argv[])
{
//transcrever e manipular os tipos de variaveis intercambiando entre si, exemplo de numeros int com resultado em float
    int a = 16;
    int b = 178;
    double quociente = (double) a / b; //casting significa sinalizar colocando float entre parenteses
    float produto = (float)  a * b;   // é um comando force resultado float mesmo com variaveis int

    float diferenca = (float) a - b;
    float soma = (float)  a +b;                          
    printf("O quociente é: %.3f\n",quociente);
    printf("O produto é: %.3f\n",produto);
    printf("A diferenca é: %.3f\n",diferenca);
    printf("A soma é: %.3f\n",soma);
    return 0;
}
//oi meu nome é tom