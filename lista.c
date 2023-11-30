void lista_inserir_no_ordenado(No** L, No* no) {
    No* atual;
    No* anterior = NULL;

    // Percorre a lista até encontrar a posição correta
    for (atual = *L; atual != NULL && atual->valor < no->valor; anterior = atual, atual = atual->proximo);

    // Insere o nó na posição correta
    if (anterior == NULL) {
        // O nó será o primeiro da lista
        no->proximo = *L;
        *L = no;
    } else {
        // Insere entre dois nós ou no final da lista
        anterior->proximo = no;
        no->proximo = atual;
    }
}

// Função para imprimir a lista
void imprimir_lista(No* L) {
    while (L != NULL) {
        printf("%.2f ", L->valor);
        L = L->proximo;
    }
    printf("\n");
}

int main() {
    // Exemplo de uso
    No* lista = NULL;

    // Criação de nós
    No* no1 = (No*)malloc(sizeof(No));
    no1->valor = 2.5;
    no1->proximo = NULL;

    No* no2 = (No*)malloc(sizeof(No));
    no2->valor = 1.0;
    no2->proximo = NULL;

    No* no3 = (No*)malloc(sizeof(No));
    no3->valor = 3.7;
    no3->proximo = NULL;

    // Inserção ordenada
    lista_inserir_no_ordenado(&lista, no1);
    lista_inserir_no_ordenado(&lista, no2);
    lista_inserir_no_ordenado(&lista, no3);

    // Impressão da lista
    imprimir_lista(lista);

    // Liberação de memória
    free(no1);
    free(no2);
    free(no3);

    return 0;
}
