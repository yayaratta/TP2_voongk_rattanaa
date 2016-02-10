//
// Created by rattanaa on 08/02/16.
//
#include <iostream>
#include "Dvector.h"
#include <cassert>
#include <sstream>

/*!
 * \file testConstructorCopy.cpp
 * \brief Teste le constructeur par copy
 * \author voongk-rattanaa
 *
 */

using namespace std;

int main(){
    cout<<"Constructeur en entrant en parametre la dimension avec parametre d'initialisation"<<endl;
    Dvector d3 = Dvector(4,1.54);


    cout<<"Constructeur par copie"<<endl;
    Dvector d4 = Dvector(d3);
    assert(d4.size() == 4);
    cout << "Taille OK"<< endl;
    stringstream str;
    d3.display(str );
    assert (str.str() == "1.54\n1.54\n1.54\n1.54\n" );
    cout << "Contenu OK";
    cout<<endl;


    return 0;
}

