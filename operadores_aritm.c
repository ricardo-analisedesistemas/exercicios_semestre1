#include <stdio.h>   


int main(int argc, char const *argv[])
{
    //operadore aritimeticos + - * /
    int num1, num2;
    int soma, subt, mult, div;
    
    printf("Entre com o primeiro numero : ");
    scanf("%d",&num1);

    printf("Entre com o segundo numero: ");
    scanf("%d",&num2);
    
    //comandos de entrada e leitura de dados foram colocados antes da funcçoes para evitar uma exception aritimetic
    
    soma =  num1 + num2;
    subt =  num1 - num2;
    mult =  num1 * num2;
    div =   num1/num2;
    
    //comandos apra exbir resultados

    printf("A soma e: %d\n",soma);
    printf("A subtracao e: %d\n", subt);
    printf("A multiplicacao e : %d\n",mult);
    printf("A divisao e : %d\n", div);
    
    return 0;
}
