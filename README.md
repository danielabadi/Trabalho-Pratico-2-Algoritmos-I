# Trabalho Prático 2: Jogo dos Diamantes
## Introdução

Adriana é uma ourives muito famosa e conhecida por suas excentricidades. Extremamente metódica, sempre que recebe um malote com diamantes realiza o mesmo procedimento antes da criação de suas joia. Ela faz o chamado Jogo dos Diamantes para cada malote.

O jogo dos diamantes assume que para uma coleção de pedras, duas pedras quaisquer podem ser "combinadas". Suponha que tenhamos duas pedras com pesos p1 e p2, com p1 >= p2, o resultado dessa operação pode ser:
- Se p1 == p2, as duas pedras são completamente destruídas.
- Se p1 > p2, a pedra p1 sobra com um novo peso p1-p2, e a pedra p2 é completamente destruéda.

O jogo termina quando resta no conjunto uma, ou nenhuma pedra. E o objetivo é que o peso restante seja o menor possível (caso não reste nenhuma pedra, o peso restante é zero).

## Avaliação Experimental

Para a avaliação experimental o aluno deverá criar entradas para o problema de forma a avaliar se o tempo de execução do algoritmo está de acordo com a complexidade reportada na documentação, aumentando a quantidade de diamantes, guardando os tempos de execução e colocando esses valores em gráficos para melhor visualização.

É necessário executar mais de uma vez o algoritmo para entradas com o mesmo tamanho de entrada, guardando os tempos de execução e reportando a média e o desvio padrão destes tempos. Faça isso para vários valores diferentes de tamanho de entrada, para visualizar bem como o tempo está variando com a variação do tamanho da entrada.

Compare os resultados entre uma solução que use programação dinâmica, e para uma solução que não use. Veja a diferença de tempo de execução, como está aumentando o tempo com o aumento da entrada, e explique a diferença nesses valores.

Mais detalhes no arquivo de especificação.
