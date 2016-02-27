#include <iostream>
#include "Dvector.h"
#include <cassert>
#include <sstream>

/*!
 * \file test_op_reels.cpp
 * \brief Teste les operations avec les réels
 * \author voongk-rattanaa
 *
 */


using namespace std;

int main(){
    Dvector v = Dvector(6,7);
    Dvector v1 = Dvector(6);
    v1 = v * 5;
    assert(v1(5) == 35);
    cout << " v * 5 OK" <<endl;;
    v1 = v1 / 7;
    assert(v1(5) == 5);
    cout << " v / 7 OK" <<endl;

    v1 = v1 + 8;
    assert(v1(5) == 13);
    cout << " v + 8 OK" <<endl;

    v1 = v1 - 7;
    assert(v1(5) == 6);
    cout << " v - 7 OK" <<endl;

    v1 = 3 * v1;
    assert(v1(5) == 18);
    cout << " 3*v OK" <<endl;

    v1 = 2 + v1;
    assert(v1(5) == 20);
    cout << " 2 + v OK" <<endl;

    -v1;
    assert(v1(5) == -20);
    cout << " -v OK" <<endl;

}