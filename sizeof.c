#include <stdio.h>

int main(int argc, char const *argv[])
{
   printf("Tamanho de int:           %u bytes\n",sizeof(int));
   printf("Tamanho de long int:      %u bytes\n",sizeof(long int));
   printf("Tamanho de long long int: %u bytes\n",sizeof(long long int));
   printf("Tamanho de double:        %u bytes\n",sizeof(double));
   printf("Tamanho de long double:   %u bytes\n",sizeof(long double));
   printf("Tamanho de char:          %u bytes\n",sizeof(char[50])); 
   printf("Tamanho de float:         %u bytes\n",sizeof(float)); 
   return 0;
}
