void lista_inserir_no_ordenado(No** L, No* no) {
    No* atual;
    No* anterior = NULL;
    for (atual = *L; atual != NULL && atual->valor < no->valor; anterior = atual, atual = atual->proximo);
    if (anterior == NULL) {
        no->proximo = *L;
        *L = no;
    } else {
        anterior->proximo = no;
        no->proximo = atual;
    }
}
void imprimir_lista(No* L) {
    while (L != NULL) {
        printf("%.2f ", L->valor);
        L = L->proximo;
    }
    printf("\n");
}
