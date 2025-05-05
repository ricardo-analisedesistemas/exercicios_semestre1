#include <stdio.h>


int main(int argc, char const *argv[])
{
    //atrubuidores
    // atrib simples          = 
    // atrib de adicao       +=
    //atrib de subtracao     -=
    //atrib de multiplicacao *=
    //atrib de divisao       /=
    
    int numero1 = 10,numero2,result;

    result = 30;
    result--;              //decrementa 1
    printf("%d\n", result);//linha mostra valor atribuido  a resultado 29

    result += 10;         //29 += 10 =  39
    printf("%d\nr", result);//result = 39
    
    result -= numero1++;        // 39 -= 11 = 29 o numero1 sera incrementado em todo programa
    printf("%d\n", result);//result = 29
    
    result *= 5;   // 29 * 5 = 145
    printf("%d\n", result);//result = 145
    
    result /= numero1;  // 145 / 11 = 13.18
    printf("%d\n", result);// result = 13

    return 0;
}
