#include <stdlib.h>
#include <stdio.h>
int main(){
    float notas[9] = {0,0.05,0.10,0.25,0.5,1,2,5,10};
    int trocoQntd[9] = {0,20,20,20,20,20,20,20,20};
    float dinheiro = 0;
//    int linhas = 4;
//    int colunas = 4;
    int escolha;
    float precos[16] = {};
    char nomes[16][10] = {};
    strcpy(nomes[0], "testando"); // valid
    int quantidades[16];

    precos[3] = 5;
    printf("Selecione o que deseja fazer: \n");
    printf(" - Digite 0 para inserir dinheiro \n");
    printf(" - Digite 1 para acessar modo administrador \nSua escolha: ");
    scanf("%d", escolha);

    if escolha == 0{

        while escolha = 0{
            dinheiro = receberDinheiro(notas,dinheiro,trocoQntd);
            printf("Selecione o que deseja fazer: \n");
            printf(" - Digite 0 para inserir mais dinheiro \n");
            printf(" - Digite 1 para selecionar produto");
            printf(" - Digite 2 para cancelar compra");
            scanf("%d", escolha);
        }
        if escolha == 1{
            x = escolherProduto(dinheiro,precos,quantidades,nomes);

        }else if escolha == 2{
            gerarTroco(dinheiro,notas,trocoQntd);
            return 0
        }


    }else{
        while escolha != 2{
            printf("Selecione o que deseja fazer: \n");
            printf(" - Digite 0 para cadastrar/editar um produto \n");
            printf(" - Digite 1 para recarregar o troco");
            printf(" - Digite 2 sair do modo administrador");
            scanf("%d", escolha);
            if escolha == 0{
                int k = cadastro(quantidades,nomes,precos);
            }else if escolha == 1{
                recargaTroco(notas,trocoQntd)
            }
        }






    }
        return 0;

}
int cadastro(int quantidades[16], char nomes[16][10], precos[16]){
    int numero, quantidade;
    float preco;
    char[10] nome;

    printf("Atualmente temos: \n")
    for(i=0,i<16,i++){
        if quantidades[i] > 0{
            printf("- %d de %s por %f \n",quantidades[i] ,nomes[i],precos[i])
        }

    }

    printf("Selecione o número onde o produto ficará, de 0 a 15: ");
    scanf("%d \n",numero);
    printf("Escreva o preço do produto, utilizando '.' como o separador decimal: ");
    scanf("%f \n",preco);
    printf("Escreva o nome do produto: ");
    scanf("%s \n",nome);
    printf("Escreva a quantidade do produto: ");
    scanf("%s \n",quantidade);

    return 0
}
float receberDinheiro(float notas[9], float dinheiro, float troco[9]){
    int decisao = 1;
    while decisao =! 0{
        printf("Escolha que nota/moeda deseja inserir:/n");
        printf("- Digite 1 para moeda de 5 centavos /n");
        printf("- Digite 2 para moeda de 10 centavos/n");
        printf("- Digite 3 para moeda de 25 centavos/n");
        printf("- Digite 4 para moeda de 50 centavos /n");
        printf("- Digite 5 para moeda de 1 real/n");
        printf("- Digite 6 para nota de 2 reais/n");
        printf("- Digite 7 para nota de 5 reais/n");
        printf("- Digite 8 para nota de 10 reais/n");
        printf("- Digite 0 para parar de inserir dinheiro/n");
        printf("Sua decisão: ");
        scanf("%d", decisao);
        dinheiro = dinheiro + notas[d];
        troco[d] = troco[d] + 1
    }
    return dinheiro;
}
int gerarTroco(float dinheiro,float notas, int trocoQntd[9])){
    int trocoEntrega[9] = {}
    for(i = 8;i>0;i--){
        trocoEntrega[i] = (int)(dinheiro/notas[i]);
        dinheiro = dinheiro - devolucao[i]*notas[i];
    }
    printf("Você recebeu de volta:");
    for (i=0,i<9,i++){
        printf(" - %d de %f", trocoEntrega[i], notas[i] );
    }
    return 0;
}
int escolherProduto(float dinheiro, float precos[16], int quantidades[16], char nomes[16][10] ){
    int contador = 0
    int escolha
    compra:
        printf("Escolha um dos produtos abaixo: \n")
        for(i=0,i<16,i++){
            if quantidades[i] > 0{
                printf("- Digite %d para comprar %s por %f \n", i,nomes[i],precos[i])
            }

        }
        printf("Seu dinheiro: %f \n", dinheiro)
        printf("Caso queira voltar digite -1")
        printf("Sua escolha: ")
        scanf("%d", escolha)
        if dinheiro > precos[escolha]{
            dinheiro = dinheiro - precos[escolha]
            quantidades[escolha] = quantidades[escolha] - 1
            printf("Você comprou um/uma %s \n", nomes[escolha])
            printf("Seu dinheiro: %f \n", dinheiro)
            printf("- Digite 0 para comprar outro produto \n")
            printf("- Digite 1 para receber seu troco \n")
            printf("Sua escolha: ")
            scanf("%d", escolha)
        }else{
            printf("Você não tem dinheiro para fazer essa compra: \n")
            printf("- Digite 0 para comprar outro produto \n")
            printf("- Digite 1 para cancelar a compra \n")
            printf("Sua escolha: ")
            scanf("%d", escolha)
        }if escolha == 0{
            goto compra
        }
        return escolha


}

int recargaTroco(float notas[9], int trocoQntd[9]){
    int decisao = 1;
    while decisao =! 0{
        for(i=1,i<0,i++){
            printf("Temos %d de %f \n",trocoQntd[i],notas[i]);
        }
        printf("Escolha que nota/moeda deseja inserir:/n");
        printf("- Digite 1 para moeda de 5 centavos /n");
        printf("- Digite 2 para moeda de 10 centavos/n");
        printf("- Digite 3 para moeda de 25 centavos/n");
        printf("- Digite 4 para moeda de 50 centavos /n");
        printf("- Digite 5 para moeda de 1 real/n");
        printf("- Digite 6 para nota de 2 reais/n");
        printf("- Digite 7 para nota de 5 reais/n");
        printf("- Digite 8 para nota de 10 reais/n");
        printf("- Digite 0 para parar de inserir troco/n");
        printf("Sua decisão: ");
        scanf("%d", decisao);
        trocoQntd[d] = trocoQntd[d] + 1;
    }
    return 0
}

