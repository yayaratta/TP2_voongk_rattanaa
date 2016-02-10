//
// Created by rattanaa on 08/02/16.
//

#include <iostream>
#include "Dvector.h"
#include <cassert>
#include <sstream>

/*!
 * \file test_constructeur_parametre.cpp
 * \brief Teste le constructeur avec parametre
 * \author voongk-rattanaa
 *
 */

using namespace std;

int main(){
    cout<<"Constructeur en entrant en parametre la dimension sans parametre d'initialisation"<<endl;
    Dvector d2 = Dvector(6);
    assert(d2.size() == 6);
    cout<<"Taille OK"<<endl;
    stringstream str;
    d2.display(str );
    assert( str.str() == "0\n0\n0\n0\n0\n0\n" );
    cout<<"Contenu OK"<<endl;
    cout<<endl;

    cout<<"Constructeur en entrant en parametre la dimension avec parametre d'initialisation"<<endl;
    Dvector d3 = Dvector(4,1.54);
    assert(d3.size() == 4);
    cout<<"Taille OK"<<endl;
    stringstream str3;
    d3.display(str3);
    assert( str3.str() == "1.54\n1.54\n1.54\n1.54\n" );
    cout<<endl;

    return 0;
}