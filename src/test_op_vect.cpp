#include <iostream>
#include "Dvector.h"
#include <cassert>
#include <sstream>

/*!
 * \file test_op_vect.cpp
 * \brief Teste les operations entre vecteurs
 * \author voongk-rattanaa
 *
 */

using namespace std;

int main(){
    Dvector v1 = Dvector(5,8);
    Dvector v2 = Dvector(5,10);
    Dvector v3 = Dvector(5,1);

    Dvector v = Dvector(5);
    v = v1 + v2;
    assert(v(2) == 18);
    cout << " v1 + v2 OK" << endl;

    v = v2 - v3;
    assert(v(2) == 9);
    cout << " v - v3 OK" << endl;


    return 0;
}