# 🎲 Jogo de Adivinhação (Projeto 1 - C)

Um jogo simples onde o usuário precisa adivinhar um número secreto de 4 dígitos (entre 1000 e 9999), gerado aleatoriamente pelo sistema.

## 👥 Autores
- Felipe Natali Amaral – RA: 24792566  
- José Vitor Rodrigues Nucci – RA: 24024423  
- Lucas Leal Ibrahim – RA: 24014012  
- Pedro Pimentel Rodrigues – RA: 24023362  

## 📖 Descrição
- O jogador possui **10 tentativas** para acertar o número sorteado.  
- Após cada tentativa, o sistema informa quais dígitos estão corretos e em suas posições.  
- Se não acertar nas 10 rodadas, o jogador perde.  
- No final, pode escolher se deseja continuar ou sair do jogo.

## 🛠️ Tecnologias Utilizadas
- Linguagem C  
- Biblioteca `<time.h>` para geração de números aleatório



# 🧬 Jogo da Vida (Projeto 2 - C)

Implementação do clássico **Conway's Game of Life**, utilizando uma matriz 10x10 para representar células vivas e mortas.

## 👥 Autores
- Felipe Natali Amaral – RA: 24792566  
- José Vitor Rodrigues Nucci – RA: 24024423  
- Lucas Leal Ibrahim – RA: 24014012  
- Pedro Pimentel Rodrigues – RA: 24023362  

## 📖 Descrição
- Cada célula pode estar **viva (1)** ou **morta (0)**.  
- A evolução segue as regras:  
  - Uma célula viva sobrevive se tiver 2 ou 3 vizinhos.  
  - Caso contrário, morre por solidão ou superpopulação.  
  - Uma célula morta nasce se tiver exatamente 3 vizinhos.  

## 🛠️ Tecnologias Utilizadas
- Linguagem C  
- Biblioteca `<time.h>` (para aleatoriedade via `srand` e `rand`)



`markdown
# 🛒 Sistema de Controle de Loja (Projeto 3 - C)

Sistema de gerenciamento de produtos e vendas para auxiliar uma loja a acompanhar seu estoque e lucro.

## 👥 Autores
- Felipe Natali Amaral – RA: 24792566  
- José Vitor Rodrigues Nucci – RA: 24024423  
- Lucas Leal Ibrahim – RA: 24014012  
- Pedro Pimentel Rodrigues – RA: 24023362  

## 📖 Descrição
O sistema permite:  
- Cadastro de produtos (código, nome, quantidade em estoque e preço).  
- Registro de vendas associadas a produtos.  
- Relatórios como **produto mais vendido** e **quantidade de itens vendidos**.  

Foi implementado com **menu interativo (switch-case)** e laço infinito, permitindo ao usuário navegar até optar por sair.

## 🛠️ Tecnologias Utilizadas
- Linguagem C  
- Estruturas `struct` para produtos e vendas  
- Funções separadas para cada operação (modularização)  
