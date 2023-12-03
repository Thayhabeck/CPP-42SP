/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fstream1.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:01:31 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/24 21:14:42 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(void)
{
    // Um objeto ifstream é usado para leitura de arquivos
    // ifd("numbers") é o construtor de ifstream, e pode ser substituido por ifstream ifd; ifd.open("numbers");
    // .open() abre o arquivo ou cria um novo se não existir
    std::ifstream ifs("numbers"); // ifstream = input file stream
    unsigned int   dst;
    unsigned int   dst2;
    ifs >> dst >> dst2;

    std::cout << dst << " " << dst2 << std::endl;
    // .close() fecha o arquivo
    ifs.close();

    //--------------------------

    // Um objeto ofstream é usado para escrita de arquivos
    std::ofstream ofs("test.out"); // ofstream = output file stream
    ofs << "I like ponies a whole damn lot" << std::endl;
    ofs.close();

    return (0);
}

//Para mais informações: http://www.cplusplus.com/doc/tutorial/files/

// Para compilar: c++ -Wall -Wextra -Werror fstream1.cpp -o fstream1
// Para executar: ./fstream1
// Ao executar, o arquivo test.out será criado com o texto "I like ponies a whole damn lot"