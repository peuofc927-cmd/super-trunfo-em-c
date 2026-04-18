🛰️ Super Trunfo: Sistema de Comparação Geográfica
Este projeto é um simulador de duelo de cartas desenvolvido em C, focado em processamento de dados e lógica de decisão para o curso de Análise e Desenvolvimento de Sistemas (ADS).

📑 Visão Geral
O sistema permite o cadastro técnico de duas cidades/países e realiza um confronto baseado em atributos estatísticos. O diferencial deste código é a aplicação de lógica condicional avançada para tratar critérios de vitória distintos (como a Densidade Demográfica, onde o menor valor é o vencedor).

🚀 Diferenciais Técnicos deste Código
Tratamento de Dados: Uso de unsigned long para suportar grandes populações, evitando o estouro de inteiros simples.

Cálculos de Backend: Processamento automático de Densidade Demográfica e PIB per Capita através de Type Casting.

Interface no Terminal: Uso de tabelas ASCII para uma melhor experiência do usuário (UX).

Estrutura de Decisão: Implementação de switch-case para seleção de atributos e if-else aninhado para determinar o vencedor.

📊 Atributos Comparáveis
O usuário pode escolher duelar através de:

População: Total de habitantes.

Área: Extensão territorial em km².

PIB per Capita: Riqueza média por habitante.

Pontos Turísticos: Quantidade de locais de interesse.

Densidade: Inteligência lógica onde o sistema identifica que o menor valor deve vencer.

🛠️ Como Compilar e Rodar
Como o código é leve (ideal para sistemas com pouco espaço em disco), você pode usar o GCC:

Bash
# Compilar
gcc super_trunfo.c -o super_trunfo

# Executar
./super_trunfo
🧠 Evolução em ADS
Este projeto demonstra a base necessária para o desenvolvimento Back-end, como gerenciamento de variáveis, entrada e saída de dados e controle de fluxo. O próximo passo lógico é a migração desta base para Python ou a implementação de Estruturas de Dados (Structs) em C para otimizar o código.
