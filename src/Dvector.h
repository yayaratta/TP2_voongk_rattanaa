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
    int size()const;

    /*!
     * \brief Accesseur en lecture
     *
     * Methode qui permet d'accéder à une élément du vecteur
     *
     * \param i : position du double souhaité dans le vecteur
     *
     * \return le double correspondant à l'élément choisi
     */
    const double & operator()(int i) const;

    /*!
 * \brief Accesseur en lecture sans const
 *
 * Methode qui permet d'accéder à une élément du vecteur
 *
 * \param i : position du double souhaité dans le vecteur
 *
 * \return le double correspondant à l'élément choisi
 */
    double & operator()(int i);

    /*!
* \brief Redifinition de l'opérateur unaire -
*
* Methode pour renvoyer l'opposé du vecteur
*
*/
    Dvector & operator-();

    /*!
 * \brief Redifinition de l'opérateur +=
 *
 * Methode pour sommer deux vecteurs
 *
 * \param v : vecteur qu'on va ajouter
 *
 */
    Dvector & operator+= (const Dvector & v);

    /*!
* \brief Redifinition de l'opérateur -=
*
* Methode pour faire la différence entre deux vecteurs
*
* \param v : vecteur qu'on va soustraire
*
*/
    Dvector & operator-= (const Dvector & v);


    /*!
* \brief Redifinition de l'opérateur unaire -
*
* Methode qui renvoie le vecteur opposé
*
*/


    /*!
     * \brief Opérateur +=
    *
    * Methode qui permet d'additionner un vecteur et un réel
    */
    Dvector & operator += (double d);

    /*!
     * \brief Opérateur unaire -=
    *
    * Methode qui permet de soustraire un réel à un vecteur
    */
    Dvector & operator -= (double d);


    /*!
     * \brief Opérateur unaire *=
    *
    * Methode qui permet de multiplier un vecteur et un réel
    */
    Dvector & operator *= (double d);

    /*!
     * \brief Opérateur unaire /=
    *
    * Methode qui permet de diviser un vecteur par un réel
    */
    Dvector & operator /= (double d);

    /*!
     * \brief Redefinition de l'opérateur
     *
     * Methode qui vérifie si deux vecteurs sont égaux
     *
     * \param vect : vecteur à vérifier
     *
     * \return true si les deux vecteurs sont égaux, false sinon
     */
    bool operator== (const Dvector & vect);

};

/*
 * Surchargeurs externes
 */


/*!
* \brief Redifinition de l'opérateur +
*
* Redifinition de l'opérateur +
*
* \param v : vecteur
* \param s :vecteur
*
*/
Dvector operator + (const Dvector &v, const Dvector &s);

/*!
* \brief Redifinition de l'opérateur-
*
* Redifinition de l'opérateur -
*
* \param v : vecteur source
* \param s :vecteur que l'on soustraie
*
*/
Dvector operator - (const Dvector &v, const Dvector &s);

/*!
 * \brief Opérateur binaire +
 *
 * Methode qui permet d'additionner un vecteur et un réel
 */

Dvector operator + (const Dvector &v, double d);

/*!
 * \brief Opérateur binaire -
 *
 * Methode qui permet de soustraire un réel à un vecteur
 */
Dvector operator - (const Dvector &v, double d);

/*!
 * \brief Opérateur unaire *=
 *
 * Methode qui permet de multiplier un vecteur et un réel
 */
Dvector operator * (const Dvector &v, double d);

/*!
 * \brief Opérateur unaire /=
 *
 * Methode qui permet de diviser un vecteur et un réel
 */
Dvector operator / (const Dvector &v, double d);



#endif //TP1_DVECTOR_H
