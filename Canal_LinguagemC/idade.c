#include<stdio.h>
#include<stdlib.h>

int main(){
    int nasceu, atual;
    printf("Digite o ano que nasceu: \n");
     scanf("%d", &nasceu);
    printf("Digite o ano atual: \n");
    scanf("%d",&atual);
    printf("Sua idade é: %d anos\n", atual-nasceu);
    
    return 0;
}