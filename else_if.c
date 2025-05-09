#include<stdio.h>


int main(int argc, char const *argv[])
{
    int x;
    

    printf("DIGITE UM NUMERO: ");
    scanf("%d",&x);
      
   /*if(x == 9){
        printf("X e igual a 9");
      }
      else if (x == 10){
        printf("X nao e 9 X e 10");/* code */
     /* }
      else{
        printf("X nao e 9 nem 10 X E de fato:%d\n",x);
      }*/
           
      //printf(x == 9 ?"x E 9" : "Nao e 9, na verdade e :%d\n",x);
      
      printf(x == 0 ? "0" : x % 2 == 0 ? "par":"impar\n");
            //se o resto da divisao de x por for 0 entao o numero e par
      //substitui o if ifelse e o else
      return 0;
}
