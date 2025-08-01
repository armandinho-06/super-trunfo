# super-trunfo
Jogo Super Trunfo de Cidades
Descrição do Projeto
Este projeto é uma implementação simples do clássico jogo de cartas Super Trunfo, desenvolvido em linguagem C. Ele foi criado como um exercício de lógica de programação para a faculdade, com o objetivo de praticar conceitos fundamentais da linguagem.

O jogo permite a comparação entre duas cartas, cada uma representando uma cidade com seus respectivos atributos (população, área, PIB, etc.). O jogador escolhe dois atributos para a comparação, e a carta com a maior soma desses valores vence a rodada.

Funcionalidades
Definição de Cartas: O código define duas cartas com atributos fixos de cidades (São Paulo e Rio de Janeiro), incluindo dados como população, área, PIB, e pontos turísticos.

Comparação de Atributos: O usuário pode escolher dois atributos diferentes para a comparação.

Cálculo de Vitória: A vitória é determinada pela soma dos valores dos dois atributos escolhidos, premiando a carta com o maior total.

Regra Inversa: A densidade demográfica é implementada com uma regra inversa, onde o menor valor é considerado superior.

Interface Simples: O jogo interage com o usuário por meio de um menu de texto no console.

Como Executar o Projeto
Para compilar e rodar o jogo, você precisará de um compilador C (como o GCC).

Salve o código em um arquivo chamado super_trunfo.c.

Abra o terminal ou Prompt de Comando e navegue até a pasta onde o arquivo foi salvo.

Compile o código com o seguinte comando:

Bash

gcc super_trunfo.c -o super_trunfo
Execute o programa:

Bash

./super_trunfo
Tecnologias Utilizadas
Linguagem de Programação: C

Conceitos de C: structs (para a representação das cartas), switch-case (para a lógica de escolha), printf e scanf (para a interação com o usuário), e lógica de controle de fluxo.

O que Aprendi com Este Projeto
Lógica de Jogo: Desenvolvi a lógica para a comparação de atributos e a determinação do vencedor.

Organização de Código: Pratiquei a organização de dados de forma estruturada e a criação de um fluxo de execução claro.

Manipulação de Dados: Utilizei variáveis de diferentes tipos (char, int, float) e realizei cálculos básicos.

Espero que este README ajude a valorizar seu projeto e mostre o que você aprendeu com ele! Se você tiver outros projetos, pode usar essa mesma estrutura para criar um README para cada um.
