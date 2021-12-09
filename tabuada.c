#include<stdio.h>

int main(){
    int x = 0, numero;

    printf("Informe um numero\n");
    scanf("%d", &numero);

    while (x < 10)
    {
        x++;
    printf("Multiplicação de %d x %d = %d\n", numero, x, x*numero);
    }      

}