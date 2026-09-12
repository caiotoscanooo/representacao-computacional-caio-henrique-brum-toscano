# Representação Computacional de Grafos

> [!IMPORTANT]
> **Nome obrigatório do repositório**
>
> Ao criar seu repositório usando este template, utilize:
> `representacao-computacional-[nome-do-aluno]`
>
> Substitua `[nome-do-aluno]` pelo seu nome, sem espaços ou acentos e usando hífens quando necessário.
> Exemplo: `representacao-computacional-joao-silva`

## Identificação
- **Disciplina:** Ciência das Redes
- **Atividade:** Representação Computacional

## Descrição da Atividade
O objetivo desta atividade é implementar as duas formas clássicas de representação computacional de grafos em linguagem C: **Lista de Adjacência** e **Matriz de Adjacência**. Você deverá completar as rotinas responsáveis por inicializar as estruturas, inserir arestas direcionadas, verificar a existência de conexões entre vértices e gerenciar a memória alocada, praticando tanto o uso de matrizes booleanas quanto a manipulação de listas encadeadas com ponteiros.

## Especificações Técnicas
A estrutura do projeto está organizada no diretório `src/DSA/`. Esta atividade aborda duas formas fundamentais de representação computacional de grafos: **Lista de Adjacência** (com alocação dinâmica e ponteiros) e **Matriz de Adjacência** (com matriz booleana simples).

Os contratos de interface das estruturas de dados (DSA) estão definidos nos arquivos de cabeçalho (`.h`) e **não devem ser modificados**. Toda a implementação deve ser feita exclusivamente nos arquivos `.c`.

Seu trabalho consiste em implementar o comportamento definido nos seguintes módulos:

1. **Manipulação da Lista (`src/DSA/lista/`)**: Funções para criação de nós, inicialização e limpeza da memória da lista encadeada.
2. **Manipulação da Matriz (`src/DSA/matriz/`)**: Funções para inicialização, inserção e consulta de arestas na matriz de adjacência (`bool`).
3. **Abstração do Grafo (`src/DSA/grafo/`)**: Funções de alto nível para inserção de arestas, verificação de conectividade e gestão global da estrutura, integrando ambas as representações.
