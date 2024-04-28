# Estudos sobre Estrutura de Dados
## Lista Simplesmente Encadeada em C

Este repositório contém uma implementação simples de uma lista simplesmente encadeada em linguagem C. Uma lista encadeada é uma estrutura de dados fundamental na qual cada elemento (nó) contém um valor e um ponteiro para o próximo elemento na sequência.

### Organização do Código

O código está organizado da seguinte maneira:

- [`listase.h`](biblioteca/listese.h): Contém a implementação das funções relacionadas à manipulação da lista.
- [`main.c`](biblioteca/main.c): Exemplo de uso da biblioteca [`listase.h`](biblioteca/listese.h).
- [`Integrados`](integrados/integrados.c): Exemplo de integração entre [`main.c`](biblioteca/main.c) e [`listase.h`](biblioteca/listese.h), porém em um único arquivo.

### Utilização

Na pasta [`Biblioteca`](biblioteca), o código está implementado em arquivos diferentes, sendo eles [`listase.h`](biblioteca/listese.h)e [`main.c`](biblioteca/main.c), prontos para serem utilizados. Você pode compilar e executar o arquivo [`main.c`](biblioteca/main.c) em qualquer compilador C que trabalha com mais de 1 arquivo, como o [replit.com](https://www.replit.com/) ou o VScode.

Na pasta [`Integrados`](integrados/integrados.c), o código está implementado já com a biblioteca e pronto para ser utilizado. Você pode compilar e executar o arquivo [`Integrados`](integrados/integrados.c) em qualquer compilador C ou até mesmo em compiladores online, como o [onlinegdb.com](https://www.onlinegdb.com/).

### Funcionalidades Implementadas

1. **Inicialização da Lista**: Função `inicializa_lista()` que cria uma lista vazia e retorna um ponteiro para ela.
2. **Verificação de Lista Vazia**: Função `lista_vazia(No *lista)` que verifica se a lista está vazia.
3. **Inserção no Início da Lista**: Função `inserir_no_inicio(No **lista, int num)` que insere um novo nó com o valor `num` no início da lista.
4. **Inserção no Meio da Lista**: Função `inserir_no_meio(No **lista, int num, int ant)` que insere um novo nó com o valor `num` após o nó com o valor `ant`.
5. **Inserção no Fim da Lista**: Função `inserir_no_fim(No **lista, int num)` que insere um novo nó com o valor `num` no final da lista.
6. **Impressão da Lista**: Função `imprimir_lista(No *lista)` que imprime os valores da lista.
