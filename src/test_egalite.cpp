#include <iostream>
#include "Dvector.h"
#include <cassert>
#include <sstream>

/*!
 * \file test_egalite.cpp
 * \brief Teste les operateurs d'égalités
 * \author voongk-rattanaa
 *
 */

using namespace std;

int main(){
    Dvector v1 = Dvector(8,3);
    Dvector v2 = Dvector(8,5);

    assert(!(v1 == v2));
    cout << "!(v1 == v2) OK" << endl;

    v1 = v2;
    assert(v1(5) == v2(5));
    cout << " v1 = v2 OK" << endl;

    assert( v1 == v2);
    cout << "v1 == v2 OK" << endl;
    return 0;
}