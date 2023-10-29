# libft-42

#SPLIT
<p>Essa função é bem diferente de todas outras, vou explicar um pouco de como funciona o processo dela, é uma cadeia de string, ponteiro do ponteiro, imagine uma matriz. Bom ela está recebendo uma frase por exemplo "cabecudo mas sabe pensa". Ela tera que dividir nessa frase toda vez que encontrar o espaço o famoso 32 na ascii. ela vai ter que separar tudo e armazenar em uma cadeia então vai ficar, assim :
 [0] cabecudo, [1] mas, [2] sabe, [3] pensa.</p>

<p>Dentro da função você vai precisar malocar essa matriz, mas você precisar considerar que cada uma palavra é uma string e ela está sendo separadas pelo espaço (32 ascii). então precisara saber quantos espaços tem dentro da sua cadeia de strings, a sua matriz. Só fazer um contador sempre que encontrar espaço, você literalmente percorre a matriz de string, e sempre que achar o espaço conta ele, armazena numa variável né.</p>

<p>depois disso temos o respectivos espaços contados, então malocamos acrescentamos + 1 por conta do nulo, para saber identficar a ultima string.</p>

<p>como é uma matriz precisamos percorrer ela e identificar cada palavra e alocar ela em na variável da matriz mesmo, na posição da matriz[posição]</p>

<p>a gente tem um while depois dentro dela que o que ele faz é verificar se na posição atual dessa string esta se igualando a "C", então se for igual ele só incrementa, ai depois de sair desse lop fazemos uma verificação para ver se a string ainda pode ser percorrida, se for ele cria uma variavel start const char para pegar a posição atual do começo dessa string, então lopamos ela e vamos percorrendo ela toda enquanto for diferente de "c" e ainda ter o que percorrer ainda, depois disso a matriz matriz[posicao] vai  receber a substring que vai pegar a posição de onde ela começa, pegando do índice 0, do primeiro start dela, e o outro parametro vai pegar a subtração do tamanho menos onde ela está começando, a gente passa tudo nesse parametro e loops da string se repete.</p>

<p><strong>Espero ter ajudado, se precisar de ajuda só falar !</strong></p>