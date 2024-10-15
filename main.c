//
//  main.c
//  line_data_structure
//
//  Created by samuel rodrigues melo on 20/09/24.
//

#include <stdio.h>

// Inicializando as funções
int fila_vazia(int fila2[30]);
void add_elemento(int elemento, int tamanho, int fila[30]);
void remove_item(int fila[30], int tamanho);


int main(int argc, const char * argv[]) {
    //Variaveis
    int fila[30], result, tamanho, resposta, elemnto_add;
    
    //Indicando o tamanho da fila
    printf("Diga qual o tamanho da fila:\n\n\n");
    scanf("%d", &tamanho);
    
    //Inicializando o vetor
    for (int i = 0; i <=tamanho; i++){
        fila[i] = 0;
    }
    
    // Adicionando recursividade ao programa
    do{
        printf("\n\t\tEscolha uma opção: \n Digite 1 para ver a fila\n Digite 2 para adicionar um item\n Digite 3 para remover  um item\n Digite 4 para ver se a fila está vazia\n Digite 5 para encerrar\n");
        scanf("%d",&resposta);
        
        // Verifica o caso a ser usado
        switch (resposta) {
            case 1:
                result = fila_vazia(fila);

                if(result == 1){
                    printf("\n\n\nSua fila está vazia! Adicione um elemento a fila!\n\n\n");
                }
                else{
                    for (int i = 0; i < tamanho; i++){
                        if(fila[i] == 0){
                            printf("final da fila\n");
                            break;
                        }
                        printf("\n%d posição: %d ",i + 1, fila[i]);
                        
                    }
                }
                break;
            case 2:
                printf("\nDigite o elemento que deseja adicionar a fila\n");
                scanf("%d", &elemnto_add);
                add_elemento(elemnto_add, tamanho, fila);
                break;
            case 3:
                result = fila_vazia(fila);

                if(result == 1){
                    printf("\n\n\nSua fila está vazia! Adicione um elemento a fila!\n\n\n");
                }
                else{
                    remove_item(fila, tamanho);
                    printf("\n\nItem removido com sucesso\n\n");
                }
                break;
            case 4:
                result = fila_vazia(fila);

                if(result == 1){
                    printf("\n\n\nSua fila está vazia! Adicione um elemento a fila!\n\n\n");
                }
                else{
                    printf("\n\nsua fila tem elementos\n\n");
                }
                break;
                
            default:
                break;
        }
    }while(resposta != 5);
    
}
/*
          funções
 */
//Verifica se a fila está vazia
int fila_vazia(int fila2[30]){
    int sek = 0;
    if(0 == fila2[0]){
        sek = 1;
    }
    else{
        sek = 0;
    }
    return sek;
}
//Adiciona um elemento a fila
void add_elemento(int elemento, int tamanho, int fila[30]){
    int count;
    for (int i = 0; i <= tamanho; i++){
        if (fila[i] == 0){
            fila[i] = elemento;
            count = 1;
            break;
        }
        else{
            continue;
        }
    }
}
//Remove um elemento da fila
void remove_item(int fila[30], int tamanho){
    int recebe1;
    for(int i = 0; i < tamanho; i++){
        if(fila[0] == 0){
            continue;
        }
        else{
            recebe1 = fila[i];
            fila[i - 1] = recebe1;
        }
    }
        
    
}


