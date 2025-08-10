# Manual Libs Make with C++

Este repositório foi criado para demonstrar como construir bibliotecas manuais utilizando C++ e o sistema de build Make. Este é um guia passo a passo para criar, compilar e usar bibliotecas manuais, tanto estáticas quanto dinâmicas, com exemplos práticos.

## Estrutura do Repositório

- **src/**: Contém o código-fonte da biblioteca.
- **include/**: Contém os arquivos de cabeçalho (.h) da biblioteca.
- **examples/**: Exemplos de uso da biblioteca.
- **Makefile**: Script de construção para compilar a biblioteca e os exemplos.

## Requisitos

- Compilador C++ (como `g++` ou `clang++`)
- `make` instalado no sistema

## Como Usar

1. Clone este repositório:
   ```bash
   git clone https://github.com/Erick-Mafra-Edu/manual-libs-make-cpp.git
   cd manual-libs-make-cpp
   ```

2. Compile a biblioteca:
   ```bash
   make
   ```

3. Execute os exemplos:
   ```bash
   make run
   ```

4. Limpe os arquivos temporários e binários:
   ```bash
   make clean
   ```

## Estrutura de Código

- **Biblioteca Estática**: Os arquivos serão compilados em um arquivo `.a`.
- **Biblioteca Dinâmica**: Os arquivos serão compilados em um arquivo `.so` ou `.dll`.

## Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir uma issue ou enviar um pull request.

## Licença

Este projeto está licenciado sob a [MIT License](LICENSE).