# Jogo de Adivinhação em C

Este é um simples jogo de adivinhação desenvolvido em linguagem C. O jogador deve tentar adivinhar um número aleatório entre 1 e 100, recebendo dicas se o número está acima ou abaixo do chute. O programa também utiliza alocação dinâmica para armazenar o histórico de chutes.

## Funcionalidades

- Geração de números aleatórios com `rand()` e `srand()`.
- Alocação dinâmica de memória com `malloc` e `realloc`.
- Exibição do histórico de chutes realizados pelo jogador.
- Loop interativo para várias tentativas até acertar o número.

## Pré-requisitos

- Um compilador C, como o GCC.
- Ambiente para executar programas em C (Linux, Windows, macOS, etc.).

## Exemplo de Execução

```plaintext
********************
* Jogo de Adivinha *
********************
Tente adivinhar o número entre 1 e 100!

Tentativa 1: Qual é o seu chute? 50
Seu chute foi maior que o número secreto.

Tentativa 2: Qual é o seu chute? 25
Seu chute foi menor que o número secreto.

Tentativa 3: Qual é o seu chute? 37
Parabéns! Você acertou o número secreto (37)!

Você fez 3 tentativa(s). Seus chutes foram:
50 25 37

Fim de jogo. Obrigado por jogar!
