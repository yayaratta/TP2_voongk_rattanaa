#include <iostream>
#include "Dvector.h"
#include <cassert>
#include <sstream>

/*!
 * \file test_accesseur.cpp
 * \brief Teste les accesseurs
 * \author voongk-rattanaa
 *
 */

using namespace std;

int main(){
   Dvector v = Dvector(6,7);
    assert(v(3) == 7);
    cout << "v(3) = 7 OK" <<endl;
    assert(v(3) + 2  == 9);
    cout << "v(3) + 2 = 9 OK" <<endl;
    v(3) = 5;
    assert(v(3) == 5);
    cout << "v(3) = 5 OK" <<endl;
    return 0;
}