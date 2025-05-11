#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 20;
    float y = 20.0;
    char c = 's';

    printf("x >= y: %d\n",x >= y);
    printf("x <= y: %d\n",x <= y);
    printf("x == y: %d\n",x == y);
    printf("x != y: %d\n",x != y);

    printf("x >= c: %d\n", x> c);
    printf("O valor ASCII de %c e %d: \n",c,c);
  
  
  
  
    return 0;
}
