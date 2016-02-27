#include <iostream>
#include "Dvector.h"
#include <cassert>
#include <sstream>

/*!
 * \file test_resize.cpp
 * \brief Teste le resize
 * \author voongk-rattanaa
 *
 */

using namespace std;

int main(){
    Dvector v1 = Dvector(8,6);
    v1.resize(3);
    assert(v1.size() == 3);
    assert(v1(2) == 6);
    cout << "resize taille plus petite OK" << endl;

    v1.resize(5);
    assert(v1.size() == 5);
    assert(v1(2) == 6);
    assert(v1(3) == 0);
    cout << "resize taille plus grande sans initialisation OK" << endl;

    v1.resize(9,8);
    assert(v1.size() == 9);
    assert(v1(2) == 6);
    assert(v1(3) == 0);
    assert(v1(5) == 8);
    cout << "resize taille plus grande avec initialisation OK" << endl;
    return 0;
}