#include<stdio.h>>

int main(int argc, char const *argv[])
{
    float numero1 = 10.2;
    int numero2 = 10;

    printf("numero1 > numero2: %d\n", (int) numero1 > numero2); //uso do casting forçando o (int)
    printf("numero1 == numero2: %d\n", (int)numero1 == numero2);
    return 0;
}
