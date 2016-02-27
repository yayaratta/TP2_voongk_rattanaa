
#include "Dvector.h"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <cassert>
#include <string.h>

using namespace std;


/*!
 * \file Dvector.cpp
 * \brief Implémentation des méthodes et constructeurs de Dvector.h
 * \author voongk-rattanaa
 *
 */


/* ===== CONSTRUCTORS ===== */

/* --- Constructor with size and implicit initialisation --- */
Dvector::Dvector(int size, double init) {
    cout<<"On entre dans le constructeur de Dvector avec paramètres taille et initialisation implicite"<<endl;
    taille = size;
    if (taille == 0){
        return ;
    }

    pTab = new double[taille];
    for (int i = 0; i < size ; i++) {
        pTab[i] = init;
    }
    cout<<"On sort du constructeur de Dvector avec paramètres taille et initialisation implicite"<<endl;
}

/* --- Default constructor --- */
Dvector::Dvector() {
    cout<<"On entre dans le constructeur par défaut de Dvector"<<endl;
    taille = 0;
    pTab = new double[taille];
    cout<<"On sort du constructeur par défaut de Dvector"<<endl;
}

/* --- Deleter --- */
Dvector::~Dvector() {
    cout<<"On entre dans le destructeur de Dvector "<<endl;
    delete [] pTab;
    cout<<"On sort du destructeur de Dvector "<<endl;
}

/* --- Constructor by paste --- */
Dvector::Dvector(const Dvector & D) {
    cout<<"On entre dans le constructeur par copie de Dvector "<<endl;
    taille = D.taille;
    if (taille == 0){
        return ;
    }

    pTab = new double[taille];
    for (int i = 0; i < taille ; i++) {
        pTab[i] = D.pTab[i];
    }
    cout<<"On sort du constructeur par copie de Dvector "<<endl;
}

/* --- Constructor by parsing a file --- */
Dvector::Dvector(const std::string inputFile){
    cout<<"On entre dans le constructeur de Dvector avec paramètre un fichier en lecture"<<endl;
    std::ifstream fichier;//(std::string, ios::in);//on ouvre le fichier en lecture
    fichier.open(inputFile.c_str(),ifstream::in);
    if(fichier.is_open()){
        //Récuperer le nombre de ligne pour initialiser la taille du tableau
        int nombreLigne = 0; // on va garder en mémoire le nombre de ligne du fichier pour ensuite avoir la taille du vecteur
        string s;  // déclaration d'une chaîne qui contiendra la ligne lue
        while(getline(fichier, s)){
            nombreLigne++;
        }
        taille = nombreLigne; // on a la taile du vecteur
        pTab = new double[taille];

        //Prendre les données des lignes pour les rentrer en parametre du vecteur
        //On retour en début de fichier
        fichier.clear();
        fichier.seekg(0, ios::beg);
        int i = 0;
        while(getline(fichier, s))  // tant que l'on peut mettre la ligne
        {
           pTab[i] = atof(s.c_str());
            i++;
        }
        fichier.close();
    }else{
        taille = 0;
        pTab = new double[taille];
    }
    cout<<"On sort du constructeur de Dvector avec paramètre un fichier en lecture"<<endl;
}
/* ==== METHODS ====*/

void Dvector::display(std::ostream &str) {
    for (int i = 0; i < taille ; i++) {
        str<<pTab[i]<<std::endl;
    }
}

void Dvector::fillRandomly(){
    double valeurAleatoire = 0;
    srand(time(NULL));
    for (int i = 0; i < taille; i ++){
        valeurAleatoire = ((double) rand() / (RAND_MAX));;
        pTab[i] = valeurAleatoire;
    }
}

int Dvector::size()const {
    return taille;
}

double & Dvector::operator()(int i){
    assert(i >= 0 && i < taille);
    return pTab[i];
}

const double &Dvector::operator()(int i) const{
    assert(i >= 0 && i < taille);
    return pTab[i];
}

Dvector &Dvector::operator-() {

    for (int i = 0; i < taille; i++){
        pTab[i] = -pTab[i];
    }
}


Dvector &Dvector::operator+=(const Dvector &v) {
    assert(taille == v.size());
    for (int i = 0; i < taille; i++){
        pTab[i] = pTab[i] + v(i);
    }
}


Dvector &Dvector::operator-=(const Dvector &v) {
    assert(taille == v.size());
    for (int i = 0; i < taille; i++) {
        pTab[i] = pTab[i] - v(i);
    }
}

Dvector & Dvector::operator += (const double d) {
    for (int i = 0 ; i < taille ; i++) {
        pTab[i] += d;
    }
    return *this;
}

Dvector & Dvector::operator -= (const double d) {
    for (int i = 0 ; i < taille ; i++) {
        pTab[i] -= d;
    }
    return *this;
}


Dvector & Dvector::operator *= (const double d) {
    Dvector & v = *this;
    for (int i = 0; i < taille ; i++) {
        v(i) *= d;
    }
    return v ;}


Dvector & Dvector::operator /= ( const double d) {
    for (int i = 0 ; i < taille ; i++) {
        pTab[i] /= d;
    }
    return *this;
}

Dvector operator + (const Dvector &v, const double d) {
    Dvector R = Dvector(v);
    R+=d;
    return R;
}

Dvector operator - ( const Dvector &v, const double d) {
    Dvector R = Dvector(v);
    R-=d;
    return R;
}



Dvector operator+(const Dvector &v, const Dvector &s) {
    Dvector retour = Dvector(v);
    retour += s;
    return retour;
}

Dvector operator-(const Dvector &v, const Dvector &s) {
    Dvector retour = Dvector(v);
    retour -= s;
    return retour;
}

Dvector operator*( const Dvector &v, const double d) {
    Dvector R = Dvector(v);
    R*=d;
    return R;
}

Dvector operator/(const Dvector &v,const double d) {
    Dvector R = Dvector(v);
    R/=d;
    return R;

}


std::ostream & operator << (ostream &out, const Dvector &v) {
    out<<"Affichage du vecteur"<<endl;
    for (int i = 0 ; i < v.size() ; i++){
        out<<v(i)<<endl;
    }
    out<<endl;
    return out;
}


std::istream & operator >> (istream &in, Dvector &v) {
    for (int i = 0; i < v.size(); i++) {
        in>>v(i);
    }
    return in;
}

bool Dvector::operator==(const Dvector &vect) {
    if (taille != vect.size()) {
        return false;
    }
    for (int i = 0; i < taille; i++) {
        if (pTab[i] != vect(i)) {
            return false;
        }
    }
    return true;
}

Dvector & Dvector::operator= (const Dvector & v){
    //méthode 1
    assert(taille == v.size());
    memcpy(pTab,v.pTab,taille* sizeof(double));
    /**Méthode 2
     assert(taille == v.size());
     for ( int i = 0 ; i < taille; i++){
        pTab[i] = v(i);
     }
     */
}

void Dvector::resize(int t, double val) {
    taille = t;
    double *newTab = new double[t];
    if (taille >= t){
        for ( int i = 0 ; i < t ; i++){
            newTab[i] = pTab[i];
        }
    }
    else{
        for ( int i = 0 ; i < taille ; i++){
            newTab[i] = pTab[i];
        }
        for ( int i = taille ; i < t ; i ++){
            newTab[i] = val;
        }
    }
    pTab = new double[t];
    pTab = newTab;
}


Dvector operator+(const double d, const Dvector &v) {
    Dvector R = Dvector(v);
    R+=d;
    return R;
}

Dvector operator*(const double d,const Dvector &v) {
    Dvector R = Dvector(v);
    R*=d;
    return R;
}
