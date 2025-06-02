# Algoritmos Gulosos

# Intelligent Cat Embedding

Problema no CodeForcers:[https://codeforces.com/gym/104854/problem/I](https://codeforces.com/gym/104854/problem/I)

Submissão: [https://codeforces.com/gym/104854/submission/322590637](https://codeforces.com/gym/104854/submission/322590637)

## Explicação da solução
O código é uma solução para um problema de verificação e aplicação de "prompts" (ou comandos) com base em uma lista de condições, lembrando muito tarefas de correspondência e validação com base em pares de requisitos. O objetivo do programa é aplicar uma sequência de comandos (chamados de `ws`) para transformar um vetor de parâmetros iniciais (`ps`) de acordo com requisitos (pares `(u, v)`) e verificar se, ao final, todas as posições relevantes do vetor estão marcadas como "visitadas" (ou satisfeitas). Se for possível, o código imprime a sequência de comandos utilizados; caso contrário, imprime `"IMPOSSIBLE"`.

A estrutura começa com a inclusão da biblioteca `<bits/stdc++.h>`, que facilita o uso de todas as bibliotecas padrão da linguagem C++. Algumas definições são feitas para simplificar a escrita, como `int` sendo substituído por `long long`, `pii` representando pares de inteiros, e a definição de um valor máximo (`MAX`) que não é utilizado no trecho principal.

Na função `solve`, o programa primeiro lê dois inteiros `k` e `w`, onde `k` representa o tamanho do vetor de parâmetros `ps` e `w` é o número de comandos disponíveis. O vetor `ps` é preenchido com os valores fornecidos pela entrada, e um vetor auxiliar `vis`, iniciado com zeros, é usado para acompanhar quais posições do vetor `ps` já foram "satisfeitas" por algum comando.

A seguir, o programa lê `w` strings correspondentes aos nomes dos comandos (`ws`) e uma estrutura de dados chamada `prompt`, que armazena os pares `(u, v)` de cada comando, onde `u` representa o índice do vetor `ps` e `v` o valor esperado para que aquele par seja considerado válido. Esses pares definem as condições que precisam ser verdadeiras para que um comando seja aplicável.

O núcleo da lógica do programa está em uma repetição que tenta encontrar, a cada iteração, o comando mais vantajoso para ser aplicado. Para isso, o programa percorre todos os comandos e, para cada um, verifica quantas de suas condições são atendidas (`val[j]`), isto é, quantos pares `(u, v)` estão corretos e ainda não foram utilizados. O melhor comando é aquele que satisfaz o maior número de condições sem entrar em conflito com as já satisfeitas. Quando um comando válido é encontrado, seus índices são marcados como "visitados" no vetor `vis`, e o índice do comando é adicionado à lista `res`, que guarda a ordem dos comandos escolhidos.

Após esse processo, o código realiza um ajuste final: se ainda existem posições em `ps` com valor zero e que não foram visitadas, essas posições são marcadas como visitadas, pois podem ser consideradas como "neutras" ou sem necessidade de validação. Em seguida, o programa verifica se todos os índices foram marcados como visitados somando os valores do vetor `vis`. Se a soma for igual a `k`, então todas as posições foram devidamente tratadas, e o programa imprime os comandos escolhidos na ordem reversa da execução. Caso contrário, ou seja, se nem todos os requisitos puderam ser satisfeitos, o programa imprime `"IMPOSSIBLE"`.

Em resumo, este código implementa uma lógica de verificação condicional e aplicação de comandos baseando-se em requisitos que envolvem o estado atual de um vetor de parâmetros. Ele escolhe os comandos mais eficazes em cada etapa, marcando os itens satisfeitos e tentando completar todos os requisitos. Se for possível aplicar comandos de forma que todos os parâmetros sejam validados, o programa imprime a ordem desses comandos; caso contrário, sinaliza que a tarefa é impossível.

## Katana Thrower

Problema no AtCoder: [https://atcoder.jp/contests/abc085/tasks/abc085_d](https://atcoder.jp/contests/abc085/tasks/abc085_d)

Submissão: [https://atcoder.jp/contests/abc085/submissions/66413098](https://atcoder.jp/contests/abc085/submissions/66413098)

### Explicação da solução: 
O código apresentado é uma solução para um problema de otimização comum em competições de programação, no qual se deseja reduzir um valor `h` (por exemplo, a vida de um inimigo) utilizando o menor número possível de ataques. Cada ataque disponível possui dois valores associados: `x`, que representa um dano que pode ser usado repetidamente, e `y`, um ataque especial que só pode ser usado uma única vez. O objetivo do algoritmo é escolher a melhor combinação possível desses ataques para alcançar ou ultrapassar o valor `h` com o menor número de ações.

A estrutura do código começa com a inclusão da biblioteca `<bits/stdc++.h>`, que carrega todas as bibliotecas padrão do C++. Em seguida, são feitas algumas definições úteis, como `pii` para representar pares de inteiros, e o uso do tipo `long long` no lugar do tipo `int` padrão, para lidar com valores grandes. Também são definidos alguns limites e constantes que poderiam ser utilizados em diferentes contextos, mas não são centrais nesta implementação.

Na função `solve`, o programa começa lendo os valores `n` (número de ataques disponíveis) e `h` (vida do inimigo). Em seguida, é lido um vetor de pares `xs`, onde cada par contém os valores `x` e `y` de um ataque. Durante a leitura, o algoritmo também mantém o controle do maior valor de `x`, que é armazenado na variável `best`, pois representa o ataque normal mais eficiente que pode ser utilizado indefinidamente.

Depois da leitura, o vetor `xs` é ordenado de forma decrescente com base no valor `y`, priorizando os ataques especiais mais fortes. A estratégia adotada é usar primeiro os ataques especiais cujo valor `y` seja maior que o melhor ataque normal (`best`), pois vale mais a pena usar esses ataques únicos antes de recorrer ao ataque repetitivo. A cada ataque especial usado, o valor de `h` é reduzido e o contador de ataques (`ans`) é incrementado. Se `h` for reduzido a zero ou menos durante esse processo, o programa imprime o número total de ataques realizados e encerra a execução.

Caso a vida do inimigo ainda não tenha sido zerada após o uso dos melhores ataques especiais, o algoritmo calcula quantas vezes será necessário usar o ataque normal de valor `best` para completar o dano necessário. Esse cálculo é feito utilizando a fórmula `(h + best - 1) / best`, que realiza uma divisão inteira com arredondamento para cima, garantindo que o valor de `h` seja totalmente reduzido. O número final de ataques é, então, impresso como resultado.

Em resumo, o algoritmo busca minimizar o número de ataques combinando o uso eficiente de ataques especiais (utilizados apenas se forem mais fortes que o melhor ataque normal) com o uso repetido do ataque normal mais eficiente, de forma a alcançar o dano necessário da forma mais otimizada possível.

