#include<stdio.h>

long double calcula_densidade_inversa1(float pop1, float area1){

    return (long double)area1 / (long double)pop1;
}


long double calcula_densidade_inversa2(float pop2, float area2){

    return (long double)area2 / (long double)pop2;
}



int main(int argc, char const *argv[])
{
    float pop1;
    float pop2;
    float area1;
    float area2;
    long double densidade_inversa1;
    long double densidade_inversa2;
    long double resultado_menor_inversa;//variavel par verificar qual o menor valor entre os resultados e conferir ao menor valor 1 

    printf("Entre com a area total da cidade 1 em km2: ");
    scanf("%f",&area1);
    printf("Qual o numero total de habitantes da cidade 1? : ");
    scanf("%f",&pop1);
    
    printf("Entre com a area total da cidade 2 em km2: ");
    scanf("%f",&area2);
    printf("Qual o numero total de habitantes da cidade 2? : ");
    scanf("%f",&pop2);

    densidade_inversa1 = calcula_densidade_inversa1(pop1,area1);//chamada da funcao
    printf("Resultado densidade demografica inversa cidade 1: %.8Lf\n",densidade_inversa1);// L É OBRIGSTORIO PARA LONG DOUBLE
    
    densidade_inversa2 = calcula_densidade_inversa2(pop2, area2);//chamada da funcao
    printf("Resultado densidade demografica inversa cidade 2: %8LF\n",densidade_inversa2);
    printf("\n");

    (densidade_inversa1 < densidade_inversa2 ? printf("Cidade 1 tem menor densidade inversa!\n") :
    printf("Cidade 2 tem menor densidade inversa!\n"));

     
     
    
    
    
    //result = calc_media(nota1,nota2,nota3); //chamando a funcao dentro do escopo main
    
    
    return 0;
}
