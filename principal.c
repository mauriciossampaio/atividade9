int main() {
    No* lista = NULL;
    No* no1 = (No*)malloc(sizeof(No));
    no1->valor = 2.5;
    no1->proximo = NULL;
    No* no2 = (No*)malloc(sizeof(No));
    no2->valor = 1.0;
    no2->proximo = NULL;
    No* no3 = (No*)malloc(sizeof(No));
    no3->valor = 3.7;
    no3->proximo = NULL;
    lista_inserir_no_ordenado(&lista, no1);
    lista_inserir_no_ordenado(&lista, no2);
    lista_inserir_no_ordenado(&lista, no3);
    imprimir_lista(lista);
    free(no1);
    free(no2);
    free(no3);

    return 0;
}
