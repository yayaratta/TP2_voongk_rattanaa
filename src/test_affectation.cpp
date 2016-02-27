#include <iostream>
#include "Dvector.h"
#include <cassert>
#include <sstream>

/*!
 * \file test_affectation.cpp
 * \brief Teste les affectations
 * \author voongk-rattanaa
 *
 */

using namespace std;

int main(){
    Dvector v1 = Dvector(6,8);
    Dvector v2 = Dvector(6,2);

    v1 += v2;
    assert(v1(4) == 10);
    cout << "v1 += V2 OK" << endl;

    v1 -= v2;
    assert(v1(3) == 8);
    cout << "V1 -= v2 OK" << endl;

    v1 *= 2;
    assert(v1(3) == 16);
    cout << "v1 *= 2 OK" << endl;

    v1 /= 4;
    assert(v1(3) == 4);
    cout << "v1 /= 4 OK" << endl;

    v1 += 6;
    assert(v1(3) == 10);
    cout << "v1 += 6 OK" << endl;

    v1 -= 5;
    assert(v1(3) == 5);
    cout << "V1 -= 5 OK "<< endl;

    return 0;
}