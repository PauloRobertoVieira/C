#include<stdio.h>
#include<stdlib.h>
#define PI 3.1415


int main() {
    int base, altura;

    scanf("%d %d", &base, &altura);

    const int areaRetangulo = base*altura;

    printf("Area é: %d\n", areaRetangulo);
    printf("Valor de PI é: %.2f\n", PI);

    return 0;
}