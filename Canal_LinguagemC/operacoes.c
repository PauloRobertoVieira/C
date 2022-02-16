#include<stdio.h>
#include<stdlib.h>

int main(){
    int primeiro = 50;
    int rest = 10;
    float segundo = 2.5;
    double terceiro = 5.00;
    
    int soma = primeiro+segundo+terceiro;
    float sub = primeiro-terceiro-segundo;
    float mult = primeiro*segundo;
    float div = primeiro/terceiro;
    int resto = primeiro/rest;
   
    printf("%d\n", soma);
    printf("%.2f\n", sub);
    printf("%.2f\n", mult);
    printf("%.f\n", div);
    printf("%d", resto);
    return 0;
}