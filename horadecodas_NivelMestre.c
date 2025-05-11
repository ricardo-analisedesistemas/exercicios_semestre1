#include<stdio.h>


int main(int argc, char const *argv[])
{
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 4000;
    unsigned int estoqueB = 4000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA;
    int resultadoB;
    
    printf(" %s tem estoque %u e o valor unitario e R$ %.2f\n", produtoA,estoqueA,valorA);
    printf(" %s tem estoque %u e o valor unitario e R$ %.2f\n", produtoB,valorB,estoqueB);
    
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque minimo %d\n",produtoA,resultadoA);
    printf("O produto %s tem estoque minimo %d\n",produtoB,resultadoB);

    (estoqueA > estoqueB ? printf("O estoque do produto A e maior do que produto B") :
     estoqueA < estoqueB ? printf("O estoque do produto B e maior do que produto A") :
     printf("Os estoques de A e B sao iguais"));

     //SINTAXE TERNARIO   condição1 ? resultado1 : (condição2 ? resultado2 : resultado3);
 
   
    
    return 0;
}

