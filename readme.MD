# Ford-Johnson Algorithm (Merge-Insertion Sort)

O algoritmo Ford-Johnson, também conhecido como **merge-insertion sort**, é um algoritmo de ordenação que minimiza o número de comparações necessárias. Ele foi desenvolvido por Lester R. Ford Jr. e Selmer M. Johnson em 1959.

## 📋 Visão Geral

O algoritmo combina as técnicas de **merge sort** e **insertion sort** de forma inteligente:
1. **Fase de Emparelhamento**: Divide os elementos em pares e os ordena
2. **Fase de Separação**: Separa os elementos maiores e menores
3. **Fase de Ordenação Recursiva**: Ordena recursivamente os elementos maiores
4. **Fase de Inserção**: Insere os elementos menores usando a sequência de Jacobsthal

## 🔢 Exemplo Ilustrativo

Vamos ordenar a sequência: `[9, 3, 7, 1, 5, 8, 2, 6]`

### Passo 1: Emparelhamento e Ordenação de Pares

```
Entrada: [9, 3, 7, 1, 5, 8, 2, 6]

Formamos pares:
(9, 3) → (3, 9)  [menor, maior]
(7, 1) → (1, 7)  [menor, maior]  
(5, 8) → (5, 8)  [menor, maior]
(2, 6) → (2, 6)  [menor, maior]
```

### Passo 2: Separação em Small e Big

```
Small: [3, 1, 5, 2]  (elementos menores de cada par)
Big:   [9, 7, 8, 6]  (elementos maiores de cada par)
```

### Passo 3: Ordenação Recursiva do Big

O vetor **Big** `[9, 7, 8, 6]` é ordenado recursivamente usando o mesmo processo:

```
Big: [9, 7, 8, 6]

Passo 3.1: Emparelhamento
(9, 7) → (7, 9)
(8, 6) → (6, 8)

Passo 3.2: Separação
Small_sub: [7, 6]
Big_sub:   [9, 8]

Passo 3.3: Ordenação recursiva de Big_sub
Big_sub: [9, 8] → [8, 9] (ordenação direta)

Passo 3.4: Inserção de Small_sub usando Jacobsthal
Big_sub = [8, 9]
Inserir 7: [7, 8, 9]
Inserir 6: [6, 7, 8, 9]

Resultado: Big = [6, 7, 8, 9]
```

### Passo 4: Inserção Final usando Sequência de Jacobsthal

Agora temos:
- **Big**: `[6, 7, 8, 9]` (ordenado)
- **Small**: `[3, 1, 5, 2]` (a ser inserido)

#### O que é a Sequência de Jacobsthal?

A sequência de Jacobsthal é: `1, 1, 3, 5, 11, 21, 43, 85, ...`

Fórmula: `J(n) = J(n-1) + 2*J(n-2)`, onde `J(0) = 1, J(1) = 1`

Para nosso exemplo com 4 elementos no Small, usamos: `[1, 3]`

#### Inserção Ordenada

```
Big inicial: [6, 7, 8, 9]
Small:       [3, 1, 5, 2]  (índices: 0, 1, 2, 3)

Sequência Jacobsthal para tamanho 4: [1, 3]

1. Inserir Small[1] = 1:
   [1, 6, 7, 8, 9]

2. Inserir Small[3] = 2:
   [1, 2, 6, 7, 8, 9]

3. Inserir elementos restantes (Small[2], Small[0]):
   Inserir Small[2] = 5: [1, 2, 5, 6, 7, 8, 9]
   Inserir Small[0] = 3: [1, 2, 3, 5, 6, 7, 8, 9]
```

## 🎯 Por que a Sequência de Jacobsthal?

A sequência de Jacobsthal determina a **ordem ótima** para inserção, minimizando o número de comparações necessárias durante a busca binária. Isso acontece porque:

1. **Balanceamento das Comparações**: A sequência garante que as árvores de decisão da busca binária sejam balanceadas
2. **Redução de Comparações**: Evita comparações desnecessárias ao inserir elementos em ordem estratégica
3. **Otimalidade Matemática**: Comprovadamente minimiza o número total de comparações

## 📊 Complexidade

- **Tempo**: O(n log n) no pior caso, mas com **constante menor** que outros algoritmos
- **Espaço**: O(n) para armazenamento auxiliar
- **Comparações**: Próximo ao limite teórico mínimo de comparações

## 🔧 Implementação no Projeto

O projeto implementa o algoritmo Ford-Johnson para dois containers STL:

### std::vector
```cpp
void fordJohnsonVec();              // Função principal
void fordJohnsonVecPairs();         // Emparelhamento
void fordJohnsonStep2();            // Ordenação recursiva
void orderByJacobstallSeq_vec();    // Inserção com Jacobsthal
```

### std::deque
```cpp
void fordJohnsonDeq();              // Função principal  
void fordJohnsonDeqPairs();         // Emparelhamento
void fordJohnsonDeq2();             // Ordenação recursiva
void orderByJacobstallSeq_deq();    // Inserção com Jacobsthal
```

## 🚀 Como Usar

```bash
# Compilar
make

# Executar com números positivos
./PmergeMe 9 3 7 1 5 8 2 6

# Saída esperada:
# before: 9 3 7 1 5 8 2 6
# after:  1 2 3 5 6 7 8 9
# Time to process a range of 8 elements with std::vector : X us
# Time to process a range of 8 elements with std::deque : Y us
```

## 📈 Vantagens do Ford-Johnson

1. **Número Mínimo de Comparações**: Teoricamente otimizado
2. **Estabilidade**: Mantém a ordem relativa de elementos iguais
3. **Adaptabilidade**: Funciona bem com diferentes tamanhos de entrada
4. **Elegância Matemática**: Baseado em princípios matemáticos sólidos

---

*Este algoritmo representa um marco na teoria da ordenação, demonstrando como matemática e algoritmos podem se combinar para criar soluções elegantes e eficientes.*
