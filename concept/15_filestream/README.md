# Filestream

Em C++, um "filestream" refere-se às classes fornecidas pela biblioteca de E/S padrão (Entrada/Saída) para ler e escrever em arquivos. Estas classes fazem parte da biblioteca de fluxos de E/S (Input/Output streams) e são usadas para manipular arquivos tanto para leitura quanto para escrita. Existem três classes principais de filestream em C++:

ifstream: Usada para ler dados de arquivos. "ifstream" significa "input file stream" (fluxo de arquivo de entrada).
ofstream: Usada para escrever dados em arquivos. "ofstream" significa "output file stream" (fluxo de arquivo de saída).
fstream: Pode ser usada tanto para ler quanto para escrever dados em arquivos. Ela combina as funcionalidades de ifstream e ofstream.

## Utilização Básica

### Abrindo um Arquivo:

Um arquivo é aberto ao se criar um objeto de uma dessas classes e associá-lo a um arquivo específico. Isso pode ser feito no momento da criação do objeto ou posteriormente usando o método open.
Exemplo: std::ifstream inputFile("example.txt"); abre o arquivo "example.txt" para leitura.

### Lendo de um Arquivo:

Com um objeto ifstream, você pode ler dados do arquivo usando operações de fluxo, como >>, ou funções como getline().
Exemplo: inputFile >> data; lê dados do arquivo para a variável data.

### Escrevendo em um Arquivo:

De maneira similar, com um objeto ofstream, você pode escrever no arquivo usando operações de fluxo.
Exemplo: outputFile << "Hello, world!"; escreve a string no arquivo.

### Fechando um Arquivo:

Após terminar a operação de leitura/escrita, é importante fechar o arquivo usando o método close.
Exemplo: inputFile.close();

## Tratamento de Erros

As classes de filestream incluem métodos para verificar o estado do arquivo, como fail(), eof(), good(), que podem ser usados para tratar erros de E/S.

## Modos de Abertura de Arquivo
Os arquivos podem ser abertos em diferentes modos, como ios::in (leitura), ios::out (escrita), ios::binary (modo binário), entre outros. Esses modos podem ser combinados usando o operador OR bit a bit.

## Exemplo de Código

```cpp
#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::string line;
    std::ifstream file("example.txt");

    if (file.is_open()) {
        while (getline(file, line)) {
            std::cout << line << '\n';
        }
        file.close();
    } else {
        std::cout << "Unable to open file";
    }

    return 0;
}
```

Este exemplo abre um arquivo para leitura, lê o arquivo linha por linha e, em seguida, fecha o arquivo.

Em resumo, os filestreams em C++ são ferramentas poderosas para manipular arquivos, permitindo uma ampla variedade de operações de E/S com facilidade e eficiência.