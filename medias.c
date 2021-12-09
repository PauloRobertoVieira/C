#include<stdio.h>

int main(){
    float nota1, nota2, nota3, nota4, media;

    printf("informe as 4 notas\n");
    scanf("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);

    media = (nota1+nota2+nota3+nota4)/4;

    printf("Media final = %.1f\n", media);

}