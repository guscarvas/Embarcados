#include <stdlib.h>
#include <stdio.h>
int main(){
//    int linhas = 4;
//    int colunas = 4;
    int escolha
    float precos[16] = {};
    char nomes[16][10] = {};
    strcpy(nomes[0], "testando"); // valid
    int quantidades[16];

    precos[3] = 5;
    printf("Selecione o que deseja fazer: \n");
    printf(" - Digite 0 para inserir dinheiro \n");
    printf(" - Digite 1 para acessar modo administrador \nSua escolha: ");
    scanf("%d", escolha)

    if escolha == 0{

    }
    int k = cadastro();
    return 0;

};
int cadastro(){
    int linha,coluna
    float preco
    char[10] nome

    printf("Selecione a coluna onde o produto ficará: ");
    scanf("%d",coluna)
    printf("Selecione a linha onde o produto ficará: ");
    scanf("%d",linha)
    printf("Escreva o preço do produto, utilizando '.' como o separador decimal: ");
    scanf("%f",preco)
    printf("Escreva o nome do produto: ");
    scanf("%s",nome)

}
int receberDinheiro(){
    int linha,coluna
    float preco
    char[10] nome

    printf("Selecione a coluna onde o produto ficará: ");
    scanf("%d",coluna)
    printf("Selecione a linha onde o produto ficará: ");
    scanf("%d",linha)
    printf("Escreva o preço do produto, utilizando '.' como o separador decimal: ");
    scanf("%f",preco)
    printf("Escreva o nome do produto: ");
    scanf("%s",nome)

}
