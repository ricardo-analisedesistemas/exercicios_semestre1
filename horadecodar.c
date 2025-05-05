#include<stdio.h>

   float calc_media(float nota1,float nota2,float nota3){ //parametros nota1 e nota 2 passados por valor
   float media;                    //nota1 e nota2 são cópias dos valores passados na chamada da função.
   media = (nota1+nota2+nota3)/3;        //Qualquer modificação nesses parâmetros não afeta as variáveis originais.
   return media;
}

int main(int argc, char const *argv[])
{
    float nota1;
    float nota2;
    float nota3;
    float result;

    printf("Digite a nota 1: \n");
    scanf("%f",&nota1);
    printf("Digite a nota 2: \n");
    scanf("%f",&nota2);
    printf("Digite a nota 3: \n");
    scanf("%f",&nota3);
    result = calc_media(nota1,nota2,nota3); //chamando a funcao dentro do escopo main

    printf("A media entre as notas e: %.2f\n",result);
    
    return 0;
}
