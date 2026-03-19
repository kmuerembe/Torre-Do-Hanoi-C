```markdown
# Torre de Hanói com Cores

Este programa resolve o clássico problema da **Torre de Hanói** utilizando recursão, com a adição de cores no terminal para facilitar a identificação visual dos discos durante a execução.

## Funcionalidades

- Algoritmo recursivo eficiente (complexidade O(2ⁿ)).
- Exibição colorida dos discos: cada disco recebe uma cor diferente (alternando entre 6 cores ANSI).
- Contador automático do número total de movimentos.
- Entrada simples do número de discos via terminal.
- Cálculo e exibição da fórmula `2ⁿ - 1` para conferência.

## Como compilar e executar

### Compilação (com GCC):

```bash
gcc -o hanoi hanoi.c
```

Execução:

```bash
./hanoi
```

O programa solicitará que você digite o número de discos desejado.

Exemplo de uso

```
Digite o número de discos: 3

Mover disco 1 de A para C
Mover disco 2 de A para B
Mover disco 1 de C para B
Mover disco 3 de A para C
Mover disco 1 de B para A
Mover disco 2 de B para C
Mover disco 1 de A para C

Total de movimentos: 7
```

(As cores aparecerão no terminal, mas aqui estão representadas apenas pelo texto.)

Estrutura do projeto / Histórico de commits

O desenvolvimento foi dividido em três commits principais, cada um adicionando uma funcionalidade:

1. Algoritmo base – Implementação recursiva da Torre de Hanói.
2. Contador de movimentos – Variável global para rastrear o total de passos.
3. Cores ANSI – Inclusão de cores para distinguir os discos.

Requisitos

· Terminal com suporte a cores ANSI (praticamente todos os terminais modernos em Linux, macOS e Windows 10+).
· Compilador C (ex.: GCC, Clang).

Licença

Este projeto é de código aberto e pode ser usado livremente para fins educacionais.
