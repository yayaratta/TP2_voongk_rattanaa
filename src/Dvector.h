//
// Created by Kwan Voong on 03/02/2016.
//

#ifndef TP1_DVECTOR_H
#define TP1_DVECTOR_H

/*!
 * \file Dvector.h
 * \brief Définition d'un vecteur
 * \author voongk-rattanaa
 *
 */

#include <iosfwd>

/*! \class Dvector
   * \brief Classe representant un vecteur
   *
   *  La classe gere l'affichage du vecteur, de sa taille et permet de remplir aleatoirement ses composantes
   */

class Dvector {

private:
    /* === Fields === */
    double *pTab;
    int taille;

public:
    /* ==== Constructors === */
    /*!
    *  \brief Constructeur par défaut
    *
    *  Constructeur par défaut de la classe Dvector
    */
    Dvector();

    /*!
    *  \brief Constructeur
    *
    *  Constructeur de la classe Dvector
    *
    *  \param size : taille du vecteur
    *  \param init : valeur d'initialisation des composantes du vecteur. Cette valeur est implicite.
    */
    Dvector(int size, double init = 0);

    /*!
     * \brief Destructeur
     *
     * Destructeur de la classe Dvector
     */

    ~Dvector();

    /*!
    *  \brief Constructeur
    *
    *  Constructeur par copie de la classe Dvector
    *
    *  \param D : vecteur copié
    */

    Dvector(const Dvector &D);

    /*!
    *  \brief Constructeur
    *
    *  Constructeur de la classe Dvector en parsant un fichier
    *
    *  \param string : la chaine de caractère à parser
    */

    Dvector(std::string);

    /* === Methods === */

    /*!
     * \brief Affichage
     *
     * Affiche le vecteur
     *
     * \param str : flux sur lequel sera affiche le contenu du vecteur
     */
    void display(std::ostream &str);

    /*!
     * \brief Remplissage du vecteur
     *
     * Met une valeur aleatoire pour chacune des composantes du vecteur
     */
    void fillRandomly();

    /*!
     * \brief Taille du vecteur
     *
     * Methode qui permet d'obtenir la taille du vecteur
     *
     * \return l'entier representant la taille du vecteur
     */
    int size();

    /*!
     * \brief Accesseur en lecture
     *
     * Methode qui permet d'accéder à une élément du vecteur
     *
     * \return le double correspondant à l'élément choisi
     */
    double get(int i);

    /*!
     * \brief Accesseur en écriture
    *
    * Methode qui permet d'écrire dans un champ du vecteur
    */
    void set(int i,double valeur);

    /*!
     * \brief Opérateur +=
    *
    * Methode qui permet d'additionner un vecteur et un réel
    */
    Dvector & operator += (double d);



};

/*
 * Surchargeurs externes
 */

Dvector operator + (const Dvector &v, double d);


#endif //TP1_DVECTOR_H
