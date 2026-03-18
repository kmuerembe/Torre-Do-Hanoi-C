Trabalho 4 – Torre de Hanói em C

Descrição
Este repositório contém a resolução do **Trabalho 4** da disciplina de [Nome da Disciplina], cujo objetivo é resolver o clássico problema da **Torre de Hanói** utilizando **recursão**.

O programa permite:
- Escolher o número de discos
- Mostrar cada movimento realizado
- Contar o total de movimentos necessários para resolver o problema

Além do código, o repositório inclui relatório e exercícios relacionados à recursão e análise de complexidade.



 Estrutura do Repositório
torre-de-hanoi-c/
├── main.c # Código em C da Torre de Hanói
├── relatorio/
│ └── relatorio.pdf # Explicação do algoritmo e resultados
└── exercicios/
└── exercicios.pdf # Exercícios resolvidos sobre recursão e complexidade

 Instruções de Uso
1. Abrir o arquivo `main.c` em um compilador C (Code::Blocks, Dev C++, GCC, etc.)  
2. Executar o programa e digitar o número de discos desejado  
3. O programa irá imprimir **passo a passo** os movimentos e o **total de movimentos**

 Análise de Complexidade

O número mínimo de movimentos para `n` discos é dado por:
2^n - 1
Portanto, a complexidade do algoritmo é **O(2^n)**, crescendo exponencialmente com o número de discos.


