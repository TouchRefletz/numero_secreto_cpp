# Jogo do Número Mágico

## Descrição

Este é um simples jogo de adivinhação onde o jogador deve tentar adivinhar um número secreto entre 1 e 100. O jogo permite que o jogador faça até 10 tentativas, e após acertar ou esgotar o número de tentativas, oferece a opção de jogar novamente.

## Funcionalidades

- O jogador deve adivinhar um número entre 1 e 100.
- O jogo fornece dicas se o chute está muito alto ou muito baixo.
- O jogador tem até 10 tentativas para acertar o número secreto.
- Após acertar o número ou atingir o limite de tentativas, o jogador é informado sobre o resultado e pode optar por jogar novamente.
- Validação de entrada para garantir que o jogador insira um número válido.

## Tecnologias Utilizadas

- C++ (linguagem de programação)
- Biblioteca padrão do C++ (`iostream`, `cstdlib`, `ctime`, `limits`)

## Como Executar

### Pré-requisitos

Certifique-se de ter o compilador C++ instalado em sua máquina. Você pode usar o **G++**, que faz parte do **MinGW** ou do **GCC** no Linux.

- **Windows**: Instale o [MinGW](http://mingw.org/) ou use o [Code::Blocks](http://www.codeblocks.org/).
- **Linux**: Instale o GCC via seu gerenciador de pacotes (ex: `sudo apt-get install g++` no Ubuntu).
- **Mac**: Instale o [Xcode](https://developer.apple.com/xcode/) ou use o **Homebrew** (`brew install gcc`).

### Compilando e Executando

1. Salve o código abaixo em um arquivo, por exemplo, `numero_magico.cpp`.

2. Compile o código com o seguinte comando:
   
   ```bash
   g++ numero_magico.cpp -o numero_magico
   ```

3. Execute o programa:

   ```bash
   ./numero_magico
   ```

## Como Jogar

1. O programa pedirá que você digite seu chute (um número entre 1 e 100).
2. Após cada tentativa, o programa informará se o chute foi muito alto ou muito baixo.
3. Você pode continuar tentando até acertar o número ou atingir o limite de tentativas.
4. Ao final de cada rodada, você pode optar por jogar novamente.

## Licença

Este projeto é de código aberto. Você pode usá-lo, modificá-lo e redistribuí-lo sob os termos da licença [MIT](https://opensource.org/licenses/MIT).

---
