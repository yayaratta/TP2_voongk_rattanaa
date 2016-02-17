//
// Created by kwan on 17/02/16.
//

#include <iostream>
#include "Dvector.h"

/*!
 * \file test_operator_plus.cpp
 * \brief Teste l'opérateur binaire +
 * \author voongk-rattanaa
 *
 */

using namespace std;

int main(){
    cout<<"Opérateur binaire +"<<endl;
    Dvector d1 = Dvector(2,4);

    Dvector resultat = Dvector(d1+3);
    Dvector resultatDouble = Dvector(d1+2.0);

    cout<<"voici le vecteur resultat"<<endl;
    resultat.display(cout);

    cout<<"voici le vecteur resultatDouble"<<endl;
    resultatDouble.display(cout);

    return 0;
}
