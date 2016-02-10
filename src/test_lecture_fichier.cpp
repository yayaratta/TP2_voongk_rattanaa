//
// Created by rattanaa on 08/02/16.
//

#include <iostream>
#include "Dvector.h"

/*!
 * \file test_lecture_fichier.cpp
 * \brief Teste le constructeur par lecture d'un fichier en entrée
 * \author voongk-rattanaa
 *
 */

using namespace std;

int main(int argc, char *argv[]){
    char *fichier = argv[1];
    Dvector d5 = Dvector(fichier);
    d5.display(cout);

}