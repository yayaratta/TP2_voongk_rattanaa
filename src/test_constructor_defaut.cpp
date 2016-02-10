//
// Created by rattanaa on 08/02/16.
//

#include <iostream>
#include "Dvector.h"
#include <cassert>

/*!
 * \file test_constructor_defaut.cpp
 * \brief Teste le constructeur par défaut
 * \author voongk-rattanaa
 *
 */

using namespace std;

int main(){
    cout<<"Constructeur par défaut"<<endl;
    Dvector d1 = Dvector();
    assert(d1.size() == 0);
    cout<<"OK"<<endl;

    return 0;
}
