# Algoritmos Gulosos - Leonardo Machado

## Naruto and Rectangles

Plataforma: Codechef

### Enunciado

[Link do enunciado original](https://www.codechef.com/problems/COW207?tab=statement)

Dados n inteiros não negativos a1,a2,...,ana1​,a2​,...,an​, onde cada um representa um ponto na coordenada (i,ai)(i,ai). n retas verticais são desenhadas de forma que os dois pontos extremos da reta i sejam at(i,ai)(i,ai) e (i,0)(i,0).

Naruto quer desenhar um retângulo usando essas retas. A base deve ser o eixo x, enquanto os dois lados devem ser quaisquer duas retas das retas dadas acima. As outras retas desaparecerão magicamente. Observe que ele não pode movê-las. A única ação realizada por Naruto é desenhar a reta superior do retângulo conectando duas retas quaisquer.

Agora, Naruto quer saber a área máxima possível de um retângulo que ele consegue obter. Ajude-o a encontrá-la.

### Solução

1. Ordenar as retas em ordem decrescente

2. Calculamos a area da reta atual com a reta mais a esquerda, e com a reta mais a direita e mantemos o retângulo com maior área.

3. Guardaremos as posições das retas mais a esquerda e diretia em variáveis L e R, sendo L = $ \infty $ e R = $ -\infty$ inicialmente. A cada iteração, vemos se a posição da reta atual é menor que L ou maior que R.

[Link do codigo](./naruto_rect.cpp)

[Link da Submissão](https://www.codechef.com/problems/COW207?tab=submissions)

## 1D Reversi

Plataforma: AtCoder

### Enunciado

[Link do Enunciado Original](https://atcoder.jp/contests/abc047/tasks/arc063_a)

Duas raposas, Jiro e Saburo, estão jogando um jogo chamado 1D Reversi. Este jogo é jogado em um tabuleiro, usando pedras pretas e brancas. No tabuleiro, as pedras são colocadas em uma fileira, e cada jogador coloca uma nova pedra em cada extremidade da fileira. Similarmente ao jogo original de Reversi, quando uma pedra branca é colocada, todas as pedras pretas entre a nova pedra branca e outra pedra branca se transformam em pedras brancas, e vice-versa.

No meio de um jogo, algo aconteceu e Saburo teve que sair do jogo. O estado do tabuleiro neste ponto é descrito por uma string
S. Há |S| (o comprimento de S) pedras no tabuleiro, e cada caractere em S representa a cor da i-ésima pedra (1≦i≦∣S∣) da esquerda para a direita. Se o i-ésimo caractere em S for B, significa que a cor da pedra correspondente no tabuleiro é preta. Similarmente, se o i-ésimo caractere em S for W, significa que a cor da pedra correspondente é branca.

Jiro quer que todas as pedras no tabuleiro sejam da mesma cor. Para isso, ele colocará novas pedras no tabuleiro de acordo com as regras. Encontre o número mínimo de novas pedras que ele precisa colocar.

### Solução

Para encontrar a quantidade mínima, basta contar quantos pares de pedras adjacentes são de cores diferentes.

[Link do código](./1D_reversi.cpp)

[Link da Submissão](https://atcoder.jp/contests/abc047/submissions/66413333)


## Programming Contest

Plataforma: AtCoder

### Enunciado

Takahashi participará de uma competição de programação, com duração de T minutos e apresentando N problemas.
Com sua percepção extrassensorial, ele já sabe que levará Ai minutos para resolver o i-ésimo problema.

Ele escolherá zero ou mais problemas dentre os N problemas, de modo que não leve mais do que T minutos no total para resolvê-los.

Encontre o maior tempo possível para ele resolver os problemas escolhidos.

### Solução

Para resolver esse problema foi utilizada a técnica Meet in the Middle para gerar as somas dos subconjuntos de duas metades C1, e C2 do espaço original, sendo esses novos conjuntos chamados dee S1 e S2. Em seguida, obtia-se a melhor soma de cada elemento de S1 em S2. Caso a soma de um elemento i de S1, fosse melhor que um anterior, atualizava-se a variavel que armazenava o melhor.

[Link do Código](./programming_contest.cpp)

[Link da Submissão](https://atcoder.jp/contests/abc184/submissions/66413334)
