#include<stdio.h>
#include <stdbool.h>


long double calcula_densidade_inversa(long double x, long double y ){//função para calcular densidade inversa

    return (long double) x /  (long double) y; //onde x será a area em km2 e y sera o numero de habitantes
}                                              // parametros x e y foram passados como parametros genericos


/*long double calcula_densidade_inversa2(float pop2, float area2){

    return (long double)area2 / (long double)pop2;
}*/



int main(int argc, char const *argv[])
{
    float pop1 = {0};
    float pop2 = {0};
    float area1 = {0};
    float area2 = {0};
    long double densidade_inversa1 = {0};
    long double densidade_inversa2 = {0};
    long double resultado_menor_inversa = {0};//variavel par verificar qual o menor valor entre os resultados e conferir ao menor valor 1 
    char nomecidade1 [50] = {0};
    char nomecidade2 [50] = {0};
    
    
    printf("Entre com a area total da cidade 1 em km2: ");
    scanf("%f",&area1);
    printf("Qual o numero total de habitantes da cidade 1? : ");
    scanf("%f",&pop1);
    
    printf("Entre com a area total da cidade 2 em km2: ");
    scanf("%f",&area2);
    printf("Qual o numero total de habitantes da cidade 2? : ");
    scanf("%f",&pop2);

    printf("\n");
    
    densidade_inversa1 = calcula_densidade_inversa(area1,pop1);//chamada da funcao
    printf("Resultado densidade demografica inversa cidade 1: %.8Lf\n",calcula_densidade_inversa((long double)area1,(long double)pop1));// L É OBRIGSTORIO PARA LONG DOUBLE
    // os parametros area1 e pop1 foram passados na chamada da função usando casting porque area e pop sao tipo float
    
    densidade_inversa2 = calcula_densidade_inversa(area2, pop2);//chamada da funcao
    printf("Resultado densidade demografica inversa cidade 2: %.8Lf\n",calcula_densidade_inversa((long double)area2,(long double)pop2));//usar a mesma função para calculo e armazenamento do resultado em 2 variaveis diferentes
    printf("\n");

    (densidade_inversa1 < densidade_inversa2 ? printf("Cidade 1 tem menor densidade inversa!\n") :
    printf("Cidade 2 tem menor densidade inversa!\n"));

     
     
    
    
    
    //result = calc_media(nota1,nota2,nota3); //chamando a funcao dentro do escopo main
    
    
    return 0;
}
