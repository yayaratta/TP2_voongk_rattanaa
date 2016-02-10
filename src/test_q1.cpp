//
// Created by rattanaa on 08/02/16.
//

#include <iostream>
#include "Dvector.h"
#include <cassert>
#include <sstream>

/*!
 * \file test_q1.cpp
 * \brief Teste la différence d'écriture de la question 1 de l'analyse
 * \author voongk-rattanaa
 *
 */

using namespace std;

int main(){
    cout<<"Déclaration de l'objet Dvector, méthode 1"<<endl;
    Dvector x;
    x = Dvector(3,1.);
    assert(x.size() == 3);
    cout<<"Taille OK"<<endl;
    stringstream str3;
    x.display(str3);
    assert( str3.str() == "1\n1\n1\n" );
    cout<<endl;


    cout<<"Déclaration de l'objet Dvector, méthode 2"<<endl;
    Dvector y = Dvector(3,1.);
    assert(y.size() == 3);
    cout<<"Taille OK"<<endl;
    stringstream str4;
    y.display(str4);
    assert( str4.str() == "1\n1\n1\n" );
    cout<<endl;


    return 0;
}