#include <iostream>
#include "Dvector.h"
#include <cassert>
#include <sstream>

/*!
 * \file test_input_output.cpp
 * \brief Teste les flux d'entree et de sortie
 * \author voongk-rattanaa
 *
 */

using namespace std;

int main(){
    Dvector v1 = Dvector(7,6);
    cout << v1 << endl;
    cin >> v1 ;
    cout << v1 <<endl;
    return 0;
}